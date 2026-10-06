#include<stdio.h>
int main(){
	printf("%f\n",12.0/0.0);
	printf("%f\n",-12.0/0.0);
	printf("%f\n",0.0/0.0);
	//版本不一样 输出不一样 只需要知道inf为无穷，nan为无效浮点数
	 
	return 0;
	
} 
