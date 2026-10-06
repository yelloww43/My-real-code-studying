#include<stdio.h>
int main(){
	int amount = 0, price = 0;
	printf("请输入金额与票面（元）：");
	scanf("%d %d",&price,&amount);
	int change = amount-price;
	printf("找零%d元",change);
	
	return 0;
}
