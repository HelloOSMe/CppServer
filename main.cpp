#include "request.hpp"

#define PORT 80
#define  BUFFER_SIZE 8292
#define CLIENT_IP inet_ntoa(client_addr.sin_addr)

const char* kExitFlag = "exit";


int main() {
	cout<<"Start at:"<<GetFormatTime()<<endl;
	WORD winsock_version = MAKEWORD(2,2);
	WSADATA wsa_data;
	if (WSAStartup(winsock_version, &wsa_data) != 0) {
		printf("Failed to init socket dll!\n");
		return 1;
	}
	
	SOCKET server_socket= socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (server_socket == INVALID_SOCKET) {
		printf("Failed to create server socket!\n");
		return 2;
	}
	
	struct sockaddr_in server_addr;
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(PORT);
	server_addr.sin_addr.S_un.S_addr = INADDR_ANY;
	
	if (bind(server_socket, (LPSOCKADDR)&server_addr, sizeof(server_addr)) == SOCKET_ERROR) {
		printf("Failed to bind port!\n");
		return 3;
	}
	
	if (listen(server_socket, 10)) {
		printf("Failed to listen!\n");
		return 4;
	}
	
	struct sockaddr_in client_addr;
	SOCKET client_socket;
	int client_addr_len = sizeof(client_addr);
	printf("Server started successfully.\n");
	
	while (true) {
		client_socket = accept(server_socket, (SOCKADDR*)&client_addr, &client_addr_len);
		if (client_socket == INVALID_SOCKET) {
			printf("Failed to accept!\n");
			return 5;
		}
		cout<<"["<<GetFormatTime()<<"] Connect:";
		printf("%s " , inet_ntoa(client_addr.sin_addr));
		
		char recv_buf[BUFFER_SIZE+1];
		int ret = recv(client_socket, recv_buf, BUFFER_SIZE, 0);
		if (ret < 0) {
			printf("Failed to receive data!\n");
			break;
		}
		recv_buf[ret]=0; // correctly ends received string
		
		//printf("Receive\"%s\" \n", recv_buf);
		if (strcmp(kExitFlag,recv_buf)==0) {		
			printf("Exit!\n");
			break;
		}
		cout<<GetRequestClass(recv_buf)<<" "<<GetRequestPath(recv_buf)<<" "<<GetHttpVersion(recv_buf)<<endl;
		if(GetRequestClass(recv_buf)=="POST"){
			cout<<"Recv:\n"<<recv_buf<<endl<<endl;
		}
		string send_data=ReturnFunc(GetRequestPath(recv_buf),"200 OK",recv_buf);
		send(client_socket, send_data.c_str(),send_data.size(), 0);
		closesocket(client_socket);
	}
	
	
	closesocket(server_socket);
	WSACleanup();
	return 0;
}
