#include<stdio.h>
int main(){
	int price,bill;
	printf("请输入金额：");
	scanf("%d",&price);
	printf("请输入票面：");
	scanf("%d",&bill);
	if(bill>=price){
		printf("找您%d元",bill-price); 
	}else{
		printf("您的钱不够");
	}
	return 0;
}
