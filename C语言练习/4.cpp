#include<stdio.h>
int main(){
	int score;
	printf("输入分数：");
	scanf("%d",&score); 
	if(score>=135){
		printf("优秀");
		}else if(score>=120){
			printf("良好");
		}else if(score>=90){
			printf("及格");
		}else{
			printf("不及格");
		}
	return 0;	
}
