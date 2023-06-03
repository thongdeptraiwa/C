#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	printf("Nhap a: ");scanf("%f",&a);
	printf("Nhap b: ");scanf("%f",&b);
	if(a==0){
		if(b==0){
			printf("Phuong trinh co vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}else{
		printf("Phuong trinh co nghiem x = %20.2f",-b/a);
	}
	return 0;
}
