#include<stdio.h>
int main(){
	int tall;
	scanf("%d",&tall);
	int foot = tall / 30.48;
	int inch = ((tall / 30.48)-foot)*12;
	printf("%d %d\n",foot,inch);
	return 0;
}
