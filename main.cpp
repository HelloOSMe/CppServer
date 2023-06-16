#include "request.hpp"
#define PORT 80
#define  BUFFER_SIZE 8292
#define CLIENT_IP inet_ntoa(client_addr.sin_addr)

const char* kExitFlag = "exit";


int main() {
	WORD winsock_version = MAKEWORD(2,2);
	WSADATA wsa_data;
	if (WSAStartup(winsock_version, &wsa_data) != 0) {
		printlog("Failed to init socket dll!");
		return 1;
	}
	
	SOCKET server_socket= socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (server_socket == INVALID_SOCKET) {
		printlog("Failed to create server socket!");
		return 2;
	}
	
	struct sockaddr_in server_addr;
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(PORT);
	server_addr.sin_addr.S_un.S_addr = INADDR_ANY;
	
	if (bind(server_socket, (LPSOCKADDR)&server_addr, sizeof(server_addr)) == SOCKET_ERROR) {
		printlog("Failed to init on port "+int_to_string(PORT)+" (reason: Permission denied)");
		return 3;
	}
	
	if (listen(server_socket, 10)) {
		printlog("Failed to listen on port "+int_to_string(PORT));
		return 4;
	}
	
	struct sockaddr_in client_addr;
	SOCKET client_socket;
	int client_addr_len = sizeof(client_addr);
	printlog(ProgramName+" "+ProgramVersion+" started at port "+int_to_string(PORT)+" successfully.");
	
	while (true) {
		client_socket = accept(server_socket, (SOCKADDR*)&client_addr, &client_addr_len);
		if (client_socket == INVALID_SOCKET) {
			printlog("Failed to accept");
			continue;
		}
		
		char recv_buf[BUFFER_SIZE+1];
		int ret = recv(client_socket, recv_buf, BUFFER_SIZE, 0);
		if (ret < 0) {
			printlog("Failed to receive data!\n");
			continue;
		}
		recv_buf[ret]=0; // correctly ends received string
		
		//printf("Receive\"%s\" \n", recv_buf);
		if (strcmp(kExitFlag,recv_buf)==0) {		
			printlog("Exit!\n");
			continue;
		}
		printlog("Accepted");
		string recvbuf=char_to_str(recv_buf);
		string log=char_to_str(CLIENT_IP)+":"+int_to_string(PORT)+" "+GetRequestClass(recvbuf)+" "+GetRequestPath(recvbuf)+" "+GetHttpVersion(recvbuf)+" ";
		log+="["+ServerMain(GetRequestPath(recvbuf),char_to_str("200 OK"),recvbuf,client_socket,char_to_str(CLIENT_IP))+"]";
		printlog(log);
		closesocket(client_socket);
		printlog("Closed");
	}
	
	
	closesocket(server_socket);
	WSACleanup();
	return 0;
}
