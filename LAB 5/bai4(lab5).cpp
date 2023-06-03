#include <stdio.h>
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n){
	printf("Xuat mang\n");
	for(int i=0;i<n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
}
float tbc(int a[],int n){
	int tong=0;
	for(int i=0;i<n;i++){
		tong+=a[i];
	}
	return tong/n;
}
int main()
{
	int n;
	do{
		printf("\nNhap so phan tu: ");scanf("%d",&n);
	}while(n<1);
	int a[n];
	nhapmang(a,n);
	xuatmang(a,n);
	printf("\nTrung binh cong: %.2f",tbc(a,n));
	return 0;
}

