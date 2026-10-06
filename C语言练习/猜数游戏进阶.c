#include<stdio.h>
int main(){
    int x,n;
    int cnt=0;
	scanf("%d %d",&x,&n);
	while(cnt<n){
		int a;
		scanf("%d",&a);
		cnt++;
		if(a<0){
			printf("Game Over!\n");
			break;
		}else if(a>x){
			printf("Too big\n");
		}else if(a<x){
			printf("Too small\n");
		}else{
			if(cnt==1){
				printf("Bingo!\n");
			}else if(cnt<=3){
				printf("Lucky You!\n");
			}else{
				printf("Good Guess!\n");
			}
			break;
		}
		if(cnt==n){
			printf("Game Over!\n");
			break;
		}
	}
	 
	
	return 0;
}
