#include<stdio.h>
#include<string.h>
int main(){
	strcpy(dst,src);      //表示把 src 拷贝到 dst  但是src和 dst 不能重叠 
	                      //最后返回dst 
	//常见用法是先用dst申请一块内存 然后再用strcpy拷贝                      
	
	return 0;
} 
