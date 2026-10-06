#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	double a=2.0,b=1.0;
	double c;
    double sum=0.0;
	for(i=1;i<=n;i++){
		double t=a/b;
		sum=sum+t;
		//printf("%.2f\n",sum); 
		c=a;
		a=c+b;
		b=c;
	}
	printf("%.2f",sum);
	
	return 0;
} 
