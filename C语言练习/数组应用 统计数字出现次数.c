#include<stdio.h>
int main(){
	int x;
	int num[1000];
	int count[10]={0};               //这里面多次出现10 可以定义一个常数number=10 方便人类读者理解和修改 
	int i;
	//for(i=0;i<10;i++){
	//	count[i]=0;             //可以用for循环来初始化 也可以直接让 count[10]={0}         
	//}                            大括号不要漏 数组的初始化都要有大括号 
	scanf("%d",&x);             //数组的大小可以用sizeof(a)/sizeof(a[0]) 
	while(x!=-1){               //这样子算出来的大小一定是对的   
		if(x>=0 && x<=9){       //数组的赋值必须使用遍历 才能把一个数组的所有元素交给另一个数组 
			count[x]++;
		}
		scanf("%d",&x);
		}
	int j;
	for(j=0;j<10;j++){
		printf("%d的个数为%d\n",j,count[j]);
	}
	
	
	return 0;
}


