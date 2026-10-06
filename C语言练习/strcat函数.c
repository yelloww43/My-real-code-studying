#include<stdio.h>
#include<string.h>
int main(){
	//strcat(s1,s2);       //将 s2拷贝到 s1 后面 
	                     //strcpy和 strcat都是不安全的 可能会出现空间不够的情况
						 //所以可以使用安全的版本
						 //    strncpy 和 strncat 需要在参数表里多加一个参数 表示最多可以拷贝多少 
	char s1[]="Hello ";
	char s2[]="World!";   // strcmp 也有新的版本 也加个n  strncmp 的 n 是用于限制比较个字符个数 
	
	//strncpy(s1,s2,10); 
	strncat(s1,s2,10);
	strncmp(s1,s2,3);     //比较前三个字符是否相同 
	printf("%s\n",s1); 
	
	return 0;
}
