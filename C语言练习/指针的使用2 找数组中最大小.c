#include<stdio.h>
void minmax(int a[],int len,int *min,int *max);

int main(){
	int a[]={1,5,4,6,22,44,33,24,84,56};
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d,max=%d",min,max);
	return 0;
}

void minmax(int a[],int len,int *min,int *max){          //a[]其实是一个指针，如果在函数里改变数组中的某一个数，那么外部的值也会改变 
	int i;                                               //a[]写成*a也能正常运行    
	*min=*max=a[0];                                      //数组是一个常量指针 所以之前说数组 之间不能赋值 
	for(i=1;i<len;i++){
		if(a[i]>*max){
			*max=a[i];
		}
		if(a[i]<*min){
			*min=a[i];
		}
	}
	
	
}



