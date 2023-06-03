#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,delta;
	printf("Nhap a: ");scanf("%f",&a);
	printf("Nhap b: ");scanf("%f",&b);
	printf("Nhap c: ");scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			printf("Phuong trinh co nghiem x = %.2f",-c/b);
		}
	}else{
		delta  = b*b-4*a*c;
		if(delta<0){
			printf("Phuong trinh vo nghiem");
		}
		if(delta==0){
			printf("Phuong trinh co nghiem kep x = %.2f",-b/(2*a));
		}
		if(delta>0){
			printf("Phuong trinh co 2 nghiem rieng biet\n");
			printf("X1 = %.2f\n",(-b+sqrt(delta))/(2*a));
			printf("X2 = %.2f\n",(-b-sqrt(delta))/(2*a));
		}
	}
	return 0;
}
