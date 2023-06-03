#include <stdio.h>
#include <math.h>
#include <windows.h>//thuc vien system("cls");
#include <conio.h>//thuc vien getch();

//b1
void hoanDoi(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void maxMin(int &a,int &b){
	if(a>b){
		hoanDoi(a,b);
	}
}

//b2
void soNguyento(int x){
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
//b3
void soChinhphuong(int x){
	if(sqrt(x)==(int)sqrt(x)){
		printf("%d la so chinh phuong\n",x);
	}else{
		printf("%d khong phai la so chinh phuong\n",x);
	}
}

int main(){
	int chon;
	int tt=201,n=205,tp=187,d=186,dt=200,dp=188;
	char menu1[200] = "1/ Tinh trung binh tong";
	char menu2[200] = "2/ Tim so nguyen to";
	char menu3[200] = "3/ Tim so chinh phuong";
	char menu4[200] = "4/ Thoat";
	
	do{
		printf("\t\t* MENU CHUC NANG *\n");
		printf("\t++%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c++\n",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
		printf("\t%c%-30s%c\n",d,menu1,d);
		printf("\t%c%-30s%c\n",d,menu2,d);
		printf("\t%c%-30s%c\n",d,menu3,d);
		printf("\t%c%-30s%c\n",d,menu4,d);
		printf("\t++%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c++\n",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
		printf("\tMoi ban chon chuc nang: ");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				{
				int a,b,dem,tb,tong=0;
				do{
					printf("Nhap a: ");scanf("%d",&a);
					printf("Nhap b: ");scanf("%d",&b);
				}while(a==b);
				maxMin(a,b);
				int i=a;
				
				while(i<=b){
					if(i%2==0){
						tong+=i;
						dem++;
					}
					i++;
				}
				tb=tong/dem;
				printf("Trung binh tong cac so tu nhien chia het cho 2 tu %d den %d: %d",a,b,tb);
				break;
				}
			case 2:
				{
				int y;
				printf("Nhap n: ");scanf("%d",&y);
				soNguyento(y);
				break;
				}
			case 3:
				{
				int x;
				printf("Nhap x: ");scanf("%d",&x);
				soChinhphuong(x);
				break;
				}	
		}
		getch();
		system("cls");
	}while(chon!=4);
	return 0;
}
