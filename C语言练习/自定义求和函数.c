#include<stdio.h>
void sum(int begin,int end){
	int i;
	int sum=0;
	for(i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d\n",sum);
}

int main(){
	sum(1,10);
	sum(20,30);
	sum(35,45);
}






