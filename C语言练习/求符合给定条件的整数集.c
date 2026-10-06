#include<stdio.h>
int main(){
	int a,b,c,d,end;
	scanf("%d",&a);
	int count1=0;
	int count2=0;
	int count3=0;
	for(b=a;b<=a+3;b++){
		for(c=a;c<=a+3;c++){
			for(d=a;d<=a+3;d++){
				if(b!=c && b!=d && c!=d){    //
					end=b*100+c*10+d;
					printf("%d",end);
					count1++;
					if(count1!=6){
					printf(" ");
				    }else{
						printf("\n");
						count1=0;
					}
			    }	    
			}
		}
	}
	return 0;
}
