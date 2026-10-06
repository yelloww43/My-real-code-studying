#include<stdio.h>
int main(){
	int n;
	int i;
	double sign=1.0;
	//scanf("%d",&n);
	n=10; 
	double sum=0.0;
	for(i=1;i<=n;i++){
		sum+=sign/i;
		sign=-sign;    //一正一负隔项相加可以引入新的常量1，使其再每一次循环中变为相反数，就能达到一正一负相加的目的 
		//sum+=1.0/i;
	}
	printf("f(%d)=%lf\n",n,sum);
	
	return 0;
} 
