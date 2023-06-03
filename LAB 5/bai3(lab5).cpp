#include <stdio.h>
//cach 1
/*void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}*/
//cach 2
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	int a,b;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	printf("\nGia tri ban dau cua a va b : %d %d",a,b);
	//swap(&a,&b);
	swap(a,b);
	printf("\nGia tri sau hoan vi cua a va b : %d %d",a,b);
	return 0;
}
