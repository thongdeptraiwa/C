#include <stdio.h>
int dien(int kwh){
	int tien;
	if(kwh>=0&&kwh<=50){
		tien=kwh*1678;
	}
	if(kwh>=51&&kwh<=100){
		tien=50*1678+(kwh-50)*1734;
	}
	if(kwh>=101&&kwh<=200){
		tien=50*1678+50*1734+(kwh-100)*2014;
	}
	if(kwh>=201&&kwh<=300){
		tien=50*1678+50*1734+100*2014+(kwh-200)*2536;
	}
	if(kwh>=301&&kwh<=400){
		tien=50*1678+50*1734+100*2014+100*2536+(kwh-300)*2834;
	}
	if(kwh>400){
		tien=50*1678+50*1734+100*2014+100*2536+100*2834+(kwh-400)*2927;
	}
	return tien;
}
int main(){
	int kwh;
	printf("Tinh tien dien:\n");
	do{
		printf("Nhap so kwh:");scanf("%d",&kwh);
	}while(kwh<0);
	printf("Tong tien dien: %ddong/kwh",dien(kwh));
	return 0;
}
