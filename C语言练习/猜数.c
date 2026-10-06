#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int a=rand();
	int count,number;
	a%=100;
	printf("我已经想好一个100以内的数了，");
	do{
		printf("猜吧：");
		scanf("%d/n",&number);
		if(a>number){
			printf("恭喜，猜小了");
			count++; 
		}else if(a<number){
			printf("恭喜，猜大了");
			count++;
		}
	}while(a!=number);
	printf("很遗憾，你居然用了%d次才猜出来，拉完了",count);
	
	return 0;
}
