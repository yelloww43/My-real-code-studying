#include<stdio.h>
int main(){
	int x;
	int cnt;
	scanf("%d",&x);
	//x=13425;
	int t=x;
	while(t>9){
		t/=10;
		cnt*=10;
	}
	do{
		int d;
		d=x/cnt;
		
		printf("%d",d);
		if(cnt>9){
		printf(" ");
		}
		x%=cnt;
		cnt/=10;
	}while(cnt>0);
	printf("\n"); 
	return 0;
} 
