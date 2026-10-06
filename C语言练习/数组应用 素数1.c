#include<stdio.h>
int isPrime(int n);

int main(){
	int x=5;
	
	printf("%d",isPrime(x));
	
	return 0;
}

int isPrime(int n){
	int i;
	int ret=1;
	for(i=2;i<n;i++){                      //来优化循环 现在n如果足够大的话就得循环n遍 太多了 
		if(n%i==0){                        //但是如果先把2的倍数全部剔除 可以省下一半的循环 
			ret=0;                         //而在数学中 循环至根号下n还没找到公因数的话 后面就不会再有  
			break;                         //也可以省下一些循环 
		}                                  //但其实只要在前面找到素数时 剔除所以素数倍数的数 可以省下更多 
	return ret;	                           //于是我们需要利用数组来做素数表 
	}
}


