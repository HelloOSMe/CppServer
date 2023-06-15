#ifndef _OSSERVER_REQUEST_HPP
#define _OSSERVER_REQUEST_HPP
#include "functions.hpp"
extern string GetFileClass(string fn){
	string s2="",s3="";
	int i=0;
	for(i=fn.size()-1;fn[i]!='.'&&i>=0;i--){
		s2.push_back(fn[i]);
	}
	if(i<=0){return "";}
	for(i=s2.size()-1;i>=0;i--){s3.push_back(s2[i]);}
	return s3;
}
extern string FileClassDb(string s){
	s=all_to_small(s);
	if(s=="txt"||s=="log"){
		return "text/text";
	}
	if(s=="html"||s=="htm"){
		return "text/html";
	}
	if(s=="css"){
		return "text/css";
	}
	if(s=="js"){
		return "application/javascript";
	}
	if(s=="json"){
		return "application/json";
	}
	if(s=="png"){
		return "image/png";
	}
	if(s=="jpg"||s=="jpeg"){
		return "image/jpeg";
	}
	if(s=="webp"){
		return "image/webp";
	}
	if(s=="ico"||s=="icon"){
		return "image/x-icon";
	}
	return "text/text";
}
extern std::string GetRequestClass(std::string s){
	//POST,GET...
	std::string j="";
	for(int i=0;s[i]!=' ';i++){
		j.push_back(s[i]);
	}
	return j;
}
extern std::string GetRequestPath(std::string s){
	int i=0;
	for(;s[i]!=' ';i++);
	i++;
	std::string j="";
	for(;s[i]!=' ';i++){
		j.push_back(s[i]);
	}
	return j;
}
extern std::string GetHttpVersion(std::string s){
	int i=0;
	for(;s[i]!=' ';i++);
	i++;
	for(;s[i]!=' ';i++);
	i++;
	std::string j="";
	for(;s[i]!='\n';i++){
		j.push_back(s[i]);
	}
	return j;
}
extern std::string GetElement(std::string str,std::string cls){
	str+="\n";
	std::string clas="",nr="";
	int i=0;
	for(;str[i]!='\n';i++);
	i++;
	bool jl=false;
	std::string cl="";
	for(;i<str.size();i++){
		if(str[i]==':'){
			clas=cl;
			cl.clear();
			i++;
		}else if(str[i]=='\n'){
			nr=cl;
			cl.clear();
			if(all_to_small(clas)==all_to_small(cls)){
				return nr;
			}
		}else{
			cl.push_back(str[i]);
		}
	}
	return "";
}
extern string ReadPic(string fn){
	ifstream file(fn.c_str(), ios::binary);
	if (!file){
		return "";
	}
	string s="";
	// 发送图片数据
	char buffer[8192];
	while(!file.eof()){
		file.read(buffer, sizeof(buffer));
		s+=char_to_str(buffer);
	}
	return s;
}
extern string GetFilePath(string s){
	string s2="";
	for(int i=0;i<s.size()&&s[i]!='?';i++){
		s2.push_back(s[i]);
	}
	return s2;
}
extern string GetQueryString(string s){
	string s2="";
	int i=0;
	for(i=0;i<s.size()&&s[i]!='?';i++);
	for(;i<s.size();i++){
		s2.push_back(s[i]);
	}
	return s2;
}
extern string GetPostContent(string s){
	//值在两个\n之后
	string s2="";
	int i=0;
	for(;i<s.size()&&!(s[i]=='\n'&&s[i+1]=='\n');i++);
	i+=2;
	for(;i<s.size();i++){
		s2.push_back(s[i]);
	}
	return s2;
}
extern map<string,string> TidyUpPostClass(string s,string content_type){
	map<string,string> mp;
	mp.clear();
	s.push_back('\n');
	content_type=all_to_small(content_type);
	/*TODO:POST support
	  POST request:
	  application/x-www-form-urlencoded - form表单POST
	  multipart/form-data - form表单文件上传
	  application/json - json
	  text/xml - XML文件
	 */
	if(content_type=="application/x-www-form-urlencoded"){
		string head="",body="";
		for(int i=0;i<s.size();i++){
			head.clear();body.clear();
			for(;s[i]!='='&&i<s.size();i++){
				head.push_back(s[i]);
			}
			i++;
			for(;s[i]!='\n'&&i<s.size();i++){
				body.push_back(s[i]);
			}
			mp[head]=body;
		}
	}
	return mp;
}
extern string ReturnFunc(string path,string retcode,const char* requ){
	string path2=GetFilePath(path),fclass=GetFileClass(path);
	if(path2[0]=='/'){
		path2="."+path2;
	}
	if(fclass==""){
		path2+=".html";
	}
	if(path=="/"){
		path2="./index.html";
	}
	ifstream fin;
	fin.open(path2.c_str(),ios::binary);
	string fct=FileClassDb(GetFileClass(path2));
	string s="",content="";
	if(!fin.is_open()){
		fct="text/html";
		fin.open("404.html");
		if(!fin.is_open()){
			content="<html><head><title>404 Not Found</titie><style>body{display:flex;margin:0;}html,body{width:100%;height:100%}.ct{margin:auto;}</style></head>";//head
			content+="<body><div class=\"ct\"><h1>404 Not Found</h1><p align=\"center\">Path:"+path+"</p></div></body></html>";
		}else{
			while(getline(fin,s)){
				content+=s+"\n";
			}
		}
		retcode="404 Not Found";
	}else{
		while(getline(fin,s)){
			for(int i=0;i<s.size();i++){
				content.push_back(s[i]);
			}
			content.push_back('\n');
		}
	}
	//结束读取文件，开始写入响应头
	string r=char_to_str(requ);
	string senddata="";
	
	//HTTP/1.1 200 OK
	senddata+=GetHttpVersion(r)+" "+retcode+"\n";
	//Content-Type: text/html
	//Cache-Control:private
	//Date
	//Server
	senddata+="Cache-Control: private\n";
	senddata+="Content-Type: "+fct+";charset=utf-8\n";
	senddata+="Date: "+GetFormatTime()+"\n";
	//
	//<h1>你好,世界</h1>
	senddata+="\n";
	senddata+=content;
	return senddata;
}
#endif
