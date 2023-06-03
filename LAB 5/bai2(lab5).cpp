#include <stdio.h>
int checkYear(int year){
	int flag=0;
	if(year%400==0 || (year%4==0&&year%100!=0))
		flag=1;
	return flag;
}
int main(){
	int year;
	printf("Nhap nam: ");scanf("%d",&year);
	if(checkYear(year)==1)
		printf("\nNam %d la nam nhuan",year);
	else
		printf("\nNam %d khong phai la nam nhuan",year);
	return 0;
}
