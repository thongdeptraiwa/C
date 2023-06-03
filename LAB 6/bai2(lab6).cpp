#include <stdio.h>
int max(int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
int min(int a[],int n){
	int min=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min)
			min=a[i];
	}
	return min;
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
	printf("\nMax = %d",max(a,n));
	printf("\nMin = %d",min(a,n));
	return 0;
}
