#include <stdio.h>
#include <math.h>
int main(){
	float a;
	const float pi=3.14;
	printf("Nhap ban kinh: ");scanf("%f",&a);
	printf("chu vi : %.2f\n",a*2*pi);
	printf("dien tich : %.2f",a*a*pi);
	return 0;
}
