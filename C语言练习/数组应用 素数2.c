#include<stdio.h>
int isPrime(int x,int KnownPrimes[],int numberOfKnownPrimes);

int main(){
	const int number=100;                  //只有c99支持【】内加number变量 
	int prime[100]={2};
	int count = 1;
	int i=3;
	while(count<number){                     //这个循环就做出了一个素数表 包含前100个素数 
		if(isPrime(i,prime,count)){
			prime[count++]=i;
		}
		i++;
	}
	for(i=0;i<number;i++){                     //输出素数表 
		printf("%d",prime[i]);
		if((i+1)%5){
			printf("\t");
		}else{
			printf("\n");
		}
	}
	
	
	return 0;
}

int isPrime(int x,int KnownPrimes[],int numberOfKnownPrimes){
	int ret=1;
	int i;
	for(i=0;i<numberOfKnownPrimes;i++){
		if(x%KnownPrimes[i]==0){
			ret=0;
			break;
		}
	}
	return ret;
}


