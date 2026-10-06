#include<stdio.h>
int right(int a,int b);


int main(){
	int x;
	scanf("%d",&x);
	int s[x]; 
	int f[x]; 
	int i,j;
	for(i=0;i<x;i++){
		scanf("%d %d",&s[i],f[i]);
		
		//printf("%d %d\n",s[i],f[i]);
	}
	int cnt=0;
	for(i=0;i<x-1;i++){
		for(j=1;j<x;j++){
			if(right(s[i],f[j])<right(s[j],f[i]) && s[i]<=f[j]){
				cnt++;
			}else if(right(s[i],f[j])>right(s[j],f[i]) && s[i]>=f[j]){
				cnt++;
			}
		}	
    }
    
    printf("%d",cnt);
	return 0;
}

int right(int a,int b){
	int c;
	if(a<b){
		c=b-a;
	}else{
		c=a-b;
	}
	return c;
} 

