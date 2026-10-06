#include<stdio.h>
int main(){
	int a,b;
	scanf("%d/%d",&a,&b);
	//a=12;
	//b=18; 
	int x=a,y=b;
	int t;
	/*if(a<b){
		t=a;      不需要先互换，因为取余时会自动互换 
		a=b;      如 12/18 ，12对18取余得到12，12的值过后会赋给 b，18就给a了 
		b=t;
	}*/
	int d;
	while(b!=0){
		d=a%b;
		a=b;
		b=d;
		//printf("a=%d,b=%d,d=%d\n",a,b,d);
	}
	x/=a;
	y/=a;
	printf("%d/%d",x,y);
	
	return 0;
} 
