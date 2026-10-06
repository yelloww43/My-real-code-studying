#include<stdio.h>
int main(){
	int n,x,y=0;
	scanf("%d",&n);
	while(n>0){
		x=n%10;
		y=y+x;
		n/=10;
	}
	
	printf("%d",y);
	
	return 0;
}
