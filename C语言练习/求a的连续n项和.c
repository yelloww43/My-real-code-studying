#include<stdio.h>
int main(){
	int a,n;
	scanf("%d %d",&a,&n);
	int i;
	int sum=0;
	int t=a;
	for(i=1;i<=n;i++){
		sum+=a; 
		a=a*10+t; 
		//printf("a=%d sum=%d\n",a,sum); 
	}
	printf("%d\n",sum);
	
	return 0;
}
