#include<stdio.h>
int main(){
	int x,f;
	scanf("%d",&x);
	if(x>0){
		f=1;
	}else if(x==0){
		f=0;
	}else{
		f=-1;
	}
	printf("%d",f);
	return 0;
}
