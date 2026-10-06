#include<stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j;
	int cnt=0;
	int sum=0;
	for(i=m;i<=n;i++){
		int a=1;
		for(j=2;j<i-1;j++){
			if(i%j==0){
				a=0;
				break;
			}
		}
		if( a==1 ){
			cnt++;
			sum+=i;
		}
	}
	printf("%d %d\n",cnt,sum);

    return 0; 

} 
