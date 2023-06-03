#include <stdio.h>
#include <math.h>
#include <windows.h>//thuc vien system("cls");
#include <conio.h>//thuc vien getch();
//b1
void hocluc(float diem){
	if(diem>=9)
		printf("Hoc luc xuat sac\n");
	else
		if( diem>=8)
			printf("Hoc luc gioi\n");			
		else
			if( diem>=6.5)
				printf("Hoc luc kha\n");			
			else
				if(diem>=5)
					printf("Hoc luc trung binh\n");
				else
					if(diem>=3.5)	
						printf("Hoc luc yeu\n");	
							else 
								printf("Hoc luc kem\n");	
}
//b2
void bac1(float a,float b){
	if(a==0){
		if(b==0){
			printf("Phuong trinh co vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}else{
		printf("Phuong trinh co nghiem x = %.2f",-b/a);
	}
}
void bac2(float a,float b,float c,float delta){
	if(a==0){
		bac1(b,c);
	}else{
		if(delta<0){
			printf("Phuong trinh vo nghiem");
		}
		if(delta==0){
			printf("Phuong trinh co nghiem kep x = %.2f",-b/(2*a));
		}
		if(delta>0){
			printf("Phuong trinh co 2 nghiem rieng biet\n");
			printf("X1 = %.2f\n",(-b+sqrt(delta))/(2*a));
			printf("X2 = %.2f\n",(-b-sqrt(delta))/(2*a));
		}
	}
}
//b3
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
	int chon;
	do{
		printf("\t*Menu chuong trinh cho 3 bai tap tren*\n ");
		printf("1\ Chuong trinh hoc luc\n ");
		printf("2\ Chuong trinh giai phuong trinh\n ");
		printf("3\ Chuong trinh tinh tien dien\n ");
		printf("0\ Thoat\n ");
		printf("Chon chuc nang:");scanf("%d",&chon);
		switch(chon){
			case 1:
				float diem;
				do{
					printf("Nhap diem: ");scanf("%f",&diem);
				}while(diem<0 && diem>10);
				hocluc(diem);
				break;
			case 2:
				int chon2;
				printf("1\ Phuong trinh bac 1\n");
				printf("2\ Phuong trinh bac 2\n");
				printf("Chon phuong trinh:");scanf("%d",&chon2);
				switch(chon2){
					case 1:
						float a1,b1;
						printf("Nhap a: ");scanf("%f",&a1);
						printf("Nhap b: ");scanf("%f",&b1);
						bac1(a1,b1);
						break;
					case 2:
						float a2,b2,c2,delta;
						printf("Nhap a: ");scanf("%f",&a2);
						printf("Nhap b: ");scanf("%f",&b2);
						printf("Nhap c: ");scanf("%f",&c2);
						delta  = b2*b2-4*a2*c2;
						bac2(a2,b2,c2,delta);
						break;
				}
				break;
			case 3:
				int kwh;
				printf("Tinh tien dien:\n");
				do{
					printf("Nhap so kwh:");scanf("%d",&kwh);
				}while(kwh<0);
				printf("Tong tien dien: %ddong/kwh",dien(kwh));
				break;
		}
		getch();
		system("cls");
	}while(chon!=0);
	return 0;
}
