#include <stdio.h>
#include <math.h>
int main(){
	int t,l,h;
	printf("Nhap diem toan: ");scanf("%d",&t);
	printf("Nhap diem ly: ");scanf("%d",&l);
	printf("Nhap diem hoa: ");scanf("%d",&h);
	float dtb=(t*3+l*2+h)/6;
	printf("DTB : %.2f\n",dtb);
	return 0;
}
