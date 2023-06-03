#include <stdio.h>
float tbTong3(int a[],int n){
	float tong=0,dem;
	for(int i=0;i<n;i++){
		if(a[i]%3==0){
			tong+=a[i];
			dem++;
		}
	}
	return tong/dem;
}
int main(){
	int n;
	do{
		printf("Nhap n: ");scanf("%d",&n);
	}while(n<1 || n>256);
	int a[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		printf("\narr[%d]: %d",i,a[i]);
	}
	printf("\nTrung binh tong cac so chia het cho 3 la %.2f",tbTong3(a,n));
	return 0;
}
