#include <stdio.h>
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void sapXepGiamDan(int a[],int &n){
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}
int main(){
	int n;
	do{
		printf("Nhap n phan tu: ");scanf("%d",&n);
	}while(n<1||n>256);
	int a[n];
	
	for(int i=0;i<n;i++){
		printf("a[%d]: ",i);scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		printf("\na[%d]: %d",i,a[i]);
	}
	sapXepGiamDan(a,n);
	printf("\nSap xep giam dan");
	for(int i=0;i<n;i++){
		printf("\na[%d]: %d",i,a[i]);
	}
	return 0;
}
