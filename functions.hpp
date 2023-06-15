#ifndef _OSSERVER_FUNCTIONS_HPP
#define _OSSERVER_FUNCTIONS_HPP

#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

#define GT_YEA 0x000000
#define GT_MON 0x000001
#define GT_DAY 0x000002
#define GT_HOU 0x000003
#define GT_MIN 0x000004
#define GT_SEC 0x000005
#define GT_WEK 0x000006
extern int GetLocalTimes(int lei){
	time_t now_time;
	now_time = time(NULL);
	tm* timer=localtime(&now_time);
	if(lei==0){
		return 1900+timer->tm_year;
	}else if(lei==1){
		return 1+timer->tm_mon;
	}else if(lei==2){
		return timer->tm_mday;
	}else if(lei==3){
		return timer->tm_hour;
	}else if(lei==4){
		return timer->tm_min;
	}else if(lei==5){
		return timer->tm_sec;
	}else if(lei==6){
		return timer->tm_wday;
	}else{
		return now_time;
	}
}
extern int GetTimes(int lei){
	time_t now_time;
	now_time = time(NULL);
	tm* timer=gmtime(&now_time);
	if(lei==0){
		return 1900+timer->tm_year;
	}else if(lei==1){
		return 1+timer->tm_mon;
	}else if(lei==2){
		return timer->tm_mday;
	}else if(lei==3){
		return timer->tm_hour;
	}else if(lei==4){
		return timer->tm_min;
	}else if(lei==5){
		return timer->tm_sec;
	}else if(lei==6){
		return timer->tm_wday;
	}else{
		return now_time;
	}
}
extern string int_to_string(int a){
	string b="";
	while(a!=0){
		b.push_back(a%10+'0');
		a/=10;
	}
	string c="";
	for(int i=b.size()-1;i>=0;i--){
		c.push_back(b[i]);
	}
	return c;
}
extern string GetFormatTime(){
	string week[7]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	string month[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	string nowtime=week[GetTimes(GT_WEK)]+", "+int_to_string(GetTimes(GT_DAY))+" "+month[GetTimes(GT_MON)]+" "+int_to_string(GetTimes(GT_YEA))+" ";
	if(GetTimes(GT_HOU)<10){
		nowtime+="0";
	}
	nowtime+=int_to_string(GetTimes(GT_HOU))+":";
	if(GetTimes(GT_MIN)<10){
		nowtime+="0";
	}
	nowtime+=int_to_string(GetTimes(GT_MIN))+":";
	if(GetTimes(GT_SEC)<10){
		nowtime+="0";
	}
	nowtime+=int_to_string(GetTimes(GT_SEC))+" GMT";
	return nowtime;
}
extern string char_to_str(const char* ch){
	string s;
	for(int i=0;i<strlen(ch);i++){
		s.push_back(ch[i]);
	}
	return s;
}
extern string all_to_small(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
	return s;
}
extern string all_to_big(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]-=32;
		}
	}
	return s;
}
#endif
