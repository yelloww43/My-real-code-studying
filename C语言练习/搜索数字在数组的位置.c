#include<stdio.h>
int search(int key,int a[],int length);           //数组作为函数参数时不能给出数组的大小 

int main(){
	int a[]={2,5,4,6,87,12,35,45,213,66};         //初始化数组 
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d在第%d个位置上\n",x,loc);
	}else{
		printf("%d不存在\n",x);
	}
	
	return 0;
}

int search(int key,int a[],int length){
	int i;
	int ret=-1;
	for(i=0;i<length;i++){
		if(key==a[i]){
			ret=i+1;
		    break;
		}
		return ret;
	}
}
