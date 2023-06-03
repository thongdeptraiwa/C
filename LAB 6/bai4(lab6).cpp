#include <stdio.h>
int main(){
	int n,m;
	do{
		printf("Nhap n hang: ");scanf("%d",&n);
		printf("Nhap m hang: ");scanf("%d",&m);
	}while(n<1||m<1);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("\nNhap a[%d][%d]= ",i,j);scanf("%d",&a[i][j]);
		}
	}
	printf("\nMang binh phuong");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("\na[%d][%d]= %d",i,j,a[i][j]*a[i][j]);
		}
	}
	return 0;
}
