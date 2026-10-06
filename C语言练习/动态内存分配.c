#include<stdio.h>
#include<stdlib.h>        //使用 malloc 所需的头文件 
int main(){
	int number;
	int *a;
	int i; 
	printf("请输入数量：");
	scanf("%d",&number);
	//int a[number]       c99可以这么做     不是c99就得利用 malloc 函数 
	a= (int*)malloc(number*sizeof(int));   //指明 a 这个指针需要占据多少内存  之后完全可以把 a 当作数组使用
	for(i=0;i<number;i++){
		scanf("%d",&a[i]);
	} 
	for(i=number-1;i>=0;i--){
		printf("%d",a[i]);
	}
	free(a);                 //a 的内存是靠malloc借来的 所以最后使用完要释放内存 
	
	return 0;
} 




