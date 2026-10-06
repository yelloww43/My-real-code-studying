#include<stdio.h>
int main(){
	int a,b,c,d,end;
	scanf("%d",&a);
	b = a/100;
	c = (a - b*100)/10;
	d = a % 10;
	end = d*100+c*10+b;
	printf("%d",end);
	return 0;
}
