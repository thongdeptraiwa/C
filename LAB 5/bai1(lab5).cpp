#include <stdio.h>
int max(int a,int b, int c){
	int max=a; 
	if(b>=a&&b>=c)
		max=b;
	else
		max=c;
		return max;
}
int main(){
	int a,b,c;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	printf("Nhap c: ");scanf("%d",&c);
	printf("So lon nhat trong 3 so la %d",max(a,b,c));
	return 0;
}
