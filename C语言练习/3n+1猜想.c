#include<stdio.h>
int main(){
	int n,a=0;
	scanf("%d",&n); 
	while(n>1){
		int x=n%2;   
			if(x==1){
				n=(3*n+1)/2;
				a++;
			}else{
				n=n/2;
				a++;
			}
	}
	printf("%d",a);
	return 0;
}
