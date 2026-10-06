#include<stdio.h>
int main(){
	int time1,min,time,end;
	scanf("%d %d",&time1,&time);
	min = time1/100*60+time1%100;
	end = (min + time)/60*100 + (min + time)%60;
	printf("%d",end);
	return 0;
} 
