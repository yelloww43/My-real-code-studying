#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char s[]="Hello";
	char *p = strchr(s,'l');  //搜索单个字符  搜索到的是对应字符所在地址 
	*p = '\0';
	char *t=(char*)malloc(strlen(s)+1);
	strcpy(t,s);
	printf("%s\n",t);
	free(t); 
	//还有两个  strstr 是在自字符串里找字符串
	//          strasestr 也是在自字符串里找字符串 但是忽略大小写   
	
	return 0;
}
