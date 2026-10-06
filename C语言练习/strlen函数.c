#include<stdio.h>
#include<string.h>
int main(){
	char line[]="Hello";
	printf("strlen=%lu\n",strlen(line));   //strlen函数可以找出字符串的长度 但是不包括末尾的\0 
	printf("sizeof=%lu\n",sizeof(line));
	
	return 0;
}
