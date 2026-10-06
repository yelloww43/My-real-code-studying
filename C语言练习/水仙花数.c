#include<stdio.h>
int main(){
	int n;
	int i;
	n=3;
	//scanf("%d",&n);
	int d=1;
    for(i=1;i<n;i++){
    	d*=10;
	}
	for(i=d;i<d*10;i++){
		int t=i;
		int sum=0; 
		while(t>0){
			int j=t%10;
			t/=10;
			int p=j;
			int cnt=1; 
			while(cnt<n){
				p*=j;
				cnt++;
			}
			sum+=p;
		}
		if(sum==i){
			printf("%d\n",i);
		}
	}
	
	
	return 0;
}
