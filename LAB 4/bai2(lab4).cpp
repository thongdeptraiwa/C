#include <stdio.h>
#include <math.h>
int soNguyento(int x){
	if(x>1){
		int dem = 0;
		for(int i=2;i<=sqrt(x);i++)
		{
			if((int)x %i == 0){
				dem++;
				break;
			}
		}
		if(dem==0){
			printf("%d la so nguyen to\n",x);
		}else{
			printf("%d khong phai la so nguyen to\n",x);
		}
	}else{
		printf("%d khong phai la so nguyen to\n",x);
	}
}
int main(){
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	soNguyento(n);
	return 0;
}
