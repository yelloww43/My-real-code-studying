#include<stdio.h>

void swap(int *pa,int *pb);

int main(){
	int a,b;
	a=5,b=6;
	swap(&a,&b);                   //&是取址符号 用于提取变量的地址 
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
                                           //*用于访问某个变量的地址 
void swap(int *pa,int *pb){               // *pa是一个整数 但是pa储存了外面的变量a的地址（指针）  
	int t=*pa;                            //所以函数内的*pa的运算会影响外面a的大小  
	*pa=*pb;
	*pb=t;
}



//   int *p = &a 这个运算可以看作是 * 是一个标志 表明后面的 p 是一个指针，p 用于储存 a 的地址
//   之后用到 * 表示访问 比如 *p 表示访问 a 的地址，*p是一个整数 
