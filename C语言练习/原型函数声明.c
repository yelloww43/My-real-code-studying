#include<stdio.h>
void sum(int begin,int end);//声明 （函数的原型就是函数的头） 
int max(int a,int b); 

int main(){
	sum(1,10);
	int c;
	c=max(10,20);
	printf("%d\n",c);
	
	return 0;
}

void sum(int begin,int end){    //定义声明   void表示没有返回类型 
	int i;
	int sum=0;
	for(i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d\n",sum);
}


 int max(int a,int b){ 
        int ret;                          //  int这里是有返回类型 
        if(a>b){                  //     return表示返回的值 
		    ret=a;
	    }else{
	        ret=b;
		}
		return ret;
    }
		
