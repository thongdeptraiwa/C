#include <stdio.h>
#include <math.h>
int soChinhphuong(int x){
	if(sqrt(x)==(int)sqrt(x)){
		printf("%d la so chinh phuong\n",x);
	}else{
		printf("%d khong phai la so chinh phuong\n",x);
	}
}
int main(){
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	soChinhphuong(n);
	return 0;
}
