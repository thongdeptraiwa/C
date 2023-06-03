#include <stdio.h>
void hoanDoi(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void maxMin(int &a,int &b){
	if(a>b){
		hoanDoi(a,b);
	}
}
int main(){
	int a,b,dem,tong=0;
	float tb;
	do{
		printf("Nhap a: ");scanf("%d",&a);
		printf("Nhap b: ");scanf("%d",&b);
	}while(a==b);
	maxMin(a,b);
	int i=a;
	while(i<=b){
		if(i%2==0){
			tong+=i;
			dem++;
		}
		i++;
	}
	tb=tong/dem;
	printf("Trung binh tong cac so tu nhien chia het cho 2 tu %d den %d: %.2f",a,b,tb);
	return 0;
}
