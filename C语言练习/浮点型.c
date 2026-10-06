#include<stdio.h>
int main(){
	float a;
	double b;
	scanf("%f %lf",&a,&b);//scanf中float用%f，double用%lf
	printf("%f %f %e %e",a,b,a,b);//printf中都用%f，%e用来做科学计数法 
	
	return 0;
}
