#include<stdio.h>
int main(){
	float r,s;
	printf("输入圆的半径：");
	scanf("%f",&r);
	s = 3.14*r*r;
	printf("圆的面积为%.2f",s);
	return 0;
}
