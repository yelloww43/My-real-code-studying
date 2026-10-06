#include<stdio.h>
int main(){
	int x;
	int sum=0;
	int cnt=0;
	int number[100];          //100是数组的个数 但是数组是从0开始的，所以结尾是99而不是100 
	scanf("%d",&x);           //编译器不会检查数组范围是否越界 所以使用到时候要小心 尤其是循环 不然程序可能崩溃 
	while(x!=-1){
		number[cnt]=x;
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	printf("%d\n",sum/cnt);
    if(cnt>0){
    	int i;
    	double average=sum/cnt;
		for(i=0;i<cnt;i++){
	    	if(number[i]>average){
	    		printf("%d ",number[i]);
			}
		}
    }
    return 0; 
}
