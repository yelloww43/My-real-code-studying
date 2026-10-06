#include<stdio.h>
#include<string.h>
int main(){
	char s1[]="abc";
	char s2[]="Abc"; 
	printf("%d\n",strcmp(s1,s2));  //strcmp函数用于比较两个字符串的大小  
	                                 //返回结果是 1（ s1 > s2 )  0 ( s1 = s2 ) -1 ( s1 < s2 )
	return 0;
} 
