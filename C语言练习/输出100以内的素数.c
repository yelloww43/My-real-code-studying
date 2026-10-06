#include<stdio.h>
int main(){
	int x=2,i;
	int cnt=0;
	//for( x=2; cnt<50; x++ )//whileºÍfor¿ÉÒÔÌæ»» 
	while(cnt<=50){
	    int yes=1;
	    for(i=2;i<x;i++){
		    if(x%i==0){
			    yes=0;
			}
	}
	if(yes==1){
		printf("%d\n",x);
		cnt++; 
	}
	x++; 
	}
	
	return 0;
} 
