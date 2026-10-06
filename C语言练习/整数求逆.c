#include<stdio.h>
int main(){
	int x,digit,end=0;
	scanf("%d",&x);
	while(x>0){
	digit=x%10;
	x/=10;
	end=end*10+digit;
    }
    printf("%d",end);
    
    return 0;
} 
