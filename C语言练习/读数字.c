#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	if(x<0){
		printf("fu ");
		x=-x;
	}
	int t=x;
	int d=1;
	while(t>9){
		t/=10;
		d*=10;
	}
	int a;
	while(d>0){
		a=x/d;
		switch(a){
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
		}
		if(d>9){
			printf(" ");
		}
		x%=d;
		d/=10;
	}
	printf("\n"); 
	
	
	return 0;
} 
