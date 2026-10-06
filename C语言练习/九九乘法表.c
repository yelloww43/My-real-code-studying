#include<stdio.h>
int main(){
	int i,j,k;
	int n;
	scanf("%d",&n); 
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			k=i*j;
			printf("%d*%d=%d",j,i,k);
			if(i==j){
				printf("\n");
			}else if(i!=j && k<10){
				printf("   ");
			}else{
				printf("  ");
			}
		}
	}
	return 0;
} 
