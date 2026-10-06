#include<stdio.h>
int main(){
	scanf("%d",&x);
	int x,i;
	int yes=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			yes=0;
			//continue;
		}
		//printf("i=%d\n",i);//break不仅适用于switch-case，也可用来跳出循环 
	}
	if(yes==1){
		printf("是素数");
	}else{
		printf("不是素数");
	}
	return 0;
} 
