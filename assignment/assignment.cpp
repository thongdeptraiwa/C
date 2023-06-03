#include <stdio.h>
#include <math.h>//thuc vien tinh toan
#include <string.h>//chuoi
#include <windows.h>//thuc vien system("cls");
#include <conio.h>//thuc vien getch();
#include <stdlib.h>
#include <time.h>
//menu
int menu(int &chon)
{
		int tt=201,n=205,tp=187,d=186,dt=200,dp=188;
		char menu1[100]="1/ So nguyen,so nguyen to,so chinh phuong";
		char menu2[100]="2/ Uoc so,boi so";
		char menu3[100]="3/ Chuong trinh tinh tien cho quan karaoke";
		char menu4[100]="4/ Tinh tien dien";
		char menu5[100]="5/ Chuc nang doi tien";
		char menu6[100]="6/ Xay dung chuc trinh tinh lai suat ngan hang vay tra gop";
		char menu7[100]="7/ Xay dung chuc trinh vay tien mua xe";
		char menu8[100]="8/ Sap xep thong tin sinh vien";
		char menu9[100]="9/ Xay dung game fpoly-lott";
		char menu10[100]="10/ Xay dung chuong trinh tinh toan phan so";
		char menu0[100]="0/ Thoat";
		printf("\t\t\t\t*MENU CHUC NANG*\n");
		printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",tt,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,tp);
		printf("\t%c%-60s%c\n",d,menu1,d);
		printf("\t%c%-60s%c\n",d,menu2,d);
		printf("\t%c%-60s%c\n",d,menu3,d);
		printf("\t%c%-60s%c\n",d,menu4,d);
		printf("\t%c%-60s%c\n",d,menu5,d);
		printf("\t%c%-60s%c\n",d,menu6,d);
		printf("\t%c%-60s%c\n",d,menu7,d);
		printf("\t%c%-60s%c\n",d,menu8,d);
		printf("\t%c%-60s%c\n",d,menu9,d);
		printf("\t%c%-60s%c\n",d,menu10,d);
		printf("\t%c%-60s%c\n",d,menu0,d);
		printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",dt,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,dp);
		printf("\t\t\tVui long chon chuc nang:");
		scanf("%d",&chon);
		return chon;
}
//b1
int songuyen(int x){
	if(x == (int)x)
		printf("%d la so nguyen\n",x);
	else
		printf("%d khong phai la so nguyen\n",x);
}
int songuyento(int x){
	if(x == (int)x && x>1){
		int dem = 0;
		for(int i=2;i<=sqrt(x);i++)
		{
			if((int)x %i == 0){
				dem++;
				break;
			}
		}
		if(dem==0)
			printf("%d la so nguyen to\n",x);
		else
			printf("%d khong phai la so nguyen to\n",x);
	}else
		printf("%d khong phai la so nguyen to\n",x);
}
int sochinhphuong(int x){
	if(x == (int)x && x>0 && sqrt(x)==(int)sqrt(x))
		printf("%d la so chinh phuong\n",x);
	else
		printf("%d khong phai la so chinh phuong\n",x);
}
void bai1(){
	int x;
	printf("Nhap so x:");scanf("%d",&x);
	songuyen(x);
	songuyento(x);
	sochinhphuong(x);
}
//b2
int uscln(int a,int b){
	if(b==0)
		return a;
	return uscln(b,a % b);
}
int bscnn(int a,int b){
	return a*b/uscln(a,b);
}
void bai2(){
	int a,b;
	printf("Nhap a:");scanf("%d",&a);
	printf("Nhap b:");scanf("%d",&b);
	printf("USCLN cua %d va %d la %d\n",a,b,uscln(a,b));
	printf("BSCNN cua %d va %d la %d\n",a,b,bscnn(a,b));
}
//b3
int karaoke(int batdau,int ketthuc){
	int gio=ketthuc-batdau;
	int tien;
	if(gio<=3)
		tien=gio*150000;
	else
		tien=3*150000+(gio-3)*(150000*0.7);
	if(batdau>=14&&batdau<=17)
		tien=tien-(tien*0.1);
	return tien;
}
void bai3(){
	int batdau,ketthuc;
	printf("Quan mo cua luc 12h->23h\n");
	do{
	printf("Nhap gio bat dau:");scanf("%d",&batdau);
	printf("Nhap gio ket thuc:");scanf("%d",&ketthuc);
	}while(batdau<12 || ketthuc>23);
	printf("Tong tien:%d dong\n",karaoke(batdau,ketthuc));
}
//b4
int dien(int kwh){
	const int bac1=1678,bac2=1734,bac3=2014,bac4=2536,bac5=2834,bac6=2927;
	int tien;
	if(kwh<=50)
		tien=kwh*bac1;
	else if(kwh<=100)
		tien=50*bac1+(kwh-50)*bac2;
	else if(kwh<=200)
		tien=50*bac1+50*bac2+(kwh-100)*bac3;
	else if(kwh<=300)
		tien=50*bac1+50*bac2+100*bac3+(kwh-200)*bac4;
	else if(kwh<=400)
		tien=50*bac1+50*bac2+100*bac3+100*bac4+(kwh-300)*bac5;
	else
		tien=50*bac1+50*bac2+100*bac3+100*bac4+100*bac5+(kwh-400)*bac6;
	return tien;
}
void bai4(){
	int kwh;
	printf("Tinh tien dien:\n");
	do{
		printf("Nhap so kwh:");scanf("%d",&kwh);
	}while(kwh<0);
	printf("Tong tien dien: %ddong/kwh",dien(kwh));
}
//b5
void doitien(int tiendoi){
	int to1k,to2k,to5k,to10k,to20k,to50k,to100k,to200k,to500k;
	int tien=tiendoi;
	if(tiendoi>500){
		to500k=tien/500;
		tien=tien%500;
	}
	if(tiendoi>200){
		to200k=tien/200;
		tien=tien%200;
	}
	if(tiendoi>100){
		to100k=tien/100;
		tien=tien%100;
	}
	if(tiendoi>50){
		to50k=tien/50;
		tien=tien%50;
	}
	if(tiendoi>20){
		to20k=tien/20;
		tien=tien%20;
	}
	if(tiendoi>10){
		to10k=tien/10;
		tien=tien%10;
	}
	if(tiendoi>5){
		to5k=tien/5;
		tien=tien%5;
	}
	if(tiendoi>2){
		to2k=tien/2;
		tien=tien%2;
	}
	if(tiendoi>1){
		to1k=tien/1;
		tien=tien%1;
	}
	//printf("%dk:%d to 500k, %d to 200k, %d to 100k, %d to 50k, %d to 20k, %d to 10k, %d to 5k, %d to 2k, %d to 1k\n",tiendoi,to500k,to200k,to100k,to50k,to20k,to10k,to5k,to2k,to1k);
	printf(" %dk :",tiendoi);
	if(to500k!=0)
		printf(" %d to 500k",to500k);
	if(to200k!=0)
		printf(" %d to 200k",to200k);
	if(to100k!=0)
		printf(" %d to 100k",to100k);
	if(to50k!=0)
		printf(" %d to 50k",to50k);
	if(to20k!=0)
		printf(" %d to 20k",to20k);
	if(to10k!=0)
		printf(" %d to 10k",to10k);
	if(to5k!=0)
		printf(" %d to 5k",to5k);
	if(to2k!=0)
		printf(" %d to 2k",to2k);
	if(to1k!=0)
		printf(" %d to 1k",to1k);
}
void bai5(){
	int tiendoi;
	do{
	printf("Nhap so tien can doi:");scanf("%d",&tiendoi);
	}while(tiendoi<1);
	doitien(tiendoi);
}
//b6
void lainganhang(int tienvay){
	int goc=tienvay/12;
	int lai;
	int tongthang;
	int tong;
	int conlai=tienvay;
		printf("ky han | lai phai tra | goc phai tra | so tien phai tra | so tien con lai\n");
	for(int i=1;i<=12;i++){
		lai=conlai*0.05;
		tongthang=goc+lai;
		conlai=conlai-goc;
		tong=tong+tongthang;
		printf("%2d\t%10d\t%10d\t%10d\t%10d\n",i,lai,goc,tongthang,conlai);	
	}
		printf("Tong tien phai tra trong 12 thang:%d",tong);
}
void bai6(){
	//5%/thang=0,05 | ky han 12thang 
	int tienvay;
	do{
		printf("Nhap so tien muon vay:");scanf("%d",&tienvay);
	}while(tienvay<1);
	lainganhang(tienvay);
}
//b7
void vaytienmuaxe(int phantram){
	//tien vay co dinh 500trieu
	//lai suat co dinh 7,2%/nam <=> lai 0,6%/thang=0,006
	//Thoi han vay:24 nam <=> 288thang=24nam 
	int tienvay=500000000/100*phantram;
	int lai;
	int goc=tienvay/288;
	int tongthang;
	int conlai=tienvay;
	int tongnam=0;
	int tong;
	printf("So tien phai tra lan dau (%d%%):%d\n",100-phantram,500000000/100*(100-phantram));
	for(int i=1;i<=24;i++){
			printf("**************************\t%2d nam\t************************************\n",i);
			printf("ky han | lai phai tra | goc phai tra | so tien phai tra | so tien con lai\n");
		for(int j=1;j<=12;j++){
			lai=conlai*0.006;
			tongthang=lai+goc;
			conlai=conlai-goc;
			tongnam=tongnam+tongthang;
			printf("%2d\t%10d\t%10d\t%10d\t%10d\n",j,lai,goc,tongthang,conlai);
		}
			tong=tong+tongnam;
			printf("Tong tien phai tra trong nam thu %d:%d\n",i,tongnam);
			printf("****************************************************************************\n");
	}
	printf("Tong tien phai tra trong 24 nam:%d\n",tong);		
}
void bai7(){
	int phantram;
	do{
		printf("Nhap so %% ma ban muon vay:");scanf("%d",&phantram);
	}while(phantram<1 || phantram>=100);
	vaytienmuaxe(phantram);
}
//b8
struct SV{
	char hoten[50];
	int diem;
	char hocluc[10];
};
void xeploai(SV &sv){
	if(sv.diem>=9)
		strcpy(sv.hocluc,"XUAT SAC");
	else {
		if(sv.diem>=8)
			strcpy(sv.hocluc,"GIOI");
		else {
			if(sv.diem>=6.5)
				strcpy(sv.hocluc,"KHA");
			else {
				if(sv.diem>=5)
					strcpy(sv.hocluc,"TRUNG BINH");
				else{
					strcpy(sv.hocluc,"Yeu");
				}
			}
		}
	}
}
void nhapsv(SV ds[],int &n){
	do{
		printf("Nhap so luong sv: ");scanf("%d",&n);
	}while(n<1);
	for(int i=0;i<n;i++){
		printf("SV thu %d:\n",i+1);
		printf("Nhap ten: ");fflush(stdin);gets(ds[i].hoten);
		printf("Nhap diem: ");fflush(stdin);scanf("%d",&ds[i].diem);
		xeploai(ds[i]);
	}
}
void xuatsv(SV ds[],int n){
	printf("%20s \t %5s \t %10s\n","Ho va Ten","Diem","Hoc Luc");
	for(int i=0;i<n;i++)
		printf("%20s \t %5d \t %10s\n",ds[i].hoten,ds[i].diem,ds[i].hocluc);
}
void sapxepsinhviengiamdan(SV ds[],int n){
	SV temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].diem<ds[j].diem){
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}			
		}
	}
}
void bai8(){
	int n;
	SV ds[100];	
	nhapsv(ds,n);
	xuatsv(ds,n);
	printf("Sap xep danh sach sinh vien theo diem giam dan\n");
	sapxepsinhviengiamdan(ds,n);
	xuatsv(ds,n);
}
//bai9
void bai9(){
	int rd[2];
	int m[2];
	int xs;			    
    srand(time(NULL)); 		    
    rd[0] = rand() % 1;
    rd[1] = rand() % 5;
    do{
    	printf("Nhap 2 so(1->15): ");scanf("%d",&xs);
	}while(xs<1||xs>15);//(m[0]!=0&&m[0]!=1)||(m[1]<0&&m[1]>5)
	m[0]=xs/10;
	m[1]=xs%10;
	printf("So cua ban: %d%d\n",m[0],m[1]);
    printf("Xo so: %d%d\n", rd[0],rd[1]);
	if(m[0]==rd[0]&&m[1]==rd[1])
    	printf("Chuc mung ban da trung giai nhat\n");
	if(m[1]==rd[1])
		printf("Chuc mung ban da trung giai nhi\n");
	else
		printf("Chuc mung ban may man lan sau\n");
}
//b10
struct phanso{
	int tuso;
	int mauso;
};
void rutgon(phanso *ps){
	phanso rg;
	// dung ham uscln cua b2
	int us=uscln(ps->tuso,ps->mauso);
	ps->tuso/=us;
	ps->mauso/=us;
}
void nhapphanso(phanso *ps){
	printf("Nhap vao tu so: ");scanf("%d",&ps->tuso);
	do{
		printf("Nhap vao mau so: ");scanf("%d",&ps->mauso);
	}while(ps->mauso==0);
}
void inphanso(phanso ps){
	rutgon(&ps);
	if(ps.mauso<0){
		ps.tuso*=-1;
		ps.mauso*=-1;
	}
	if(ps.mauso==1)
		printf("%d",ps.tuso);
	else
		printf("%d/%d",ps.tuso,ps.mauso);
}
phanso tongps(phanso ps1,phanso ps2){
	phanso kq;
	// a/b + c/d = (a*d + c*b)/(b*d)
	kq.tuso = ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
	kq.mauso = ps1.mauso * ps2.mauso;
	return kq;
}
phanso hieups(phanso ps1,phanso ps2){
	phanso kq;
	// a/b + c/d = (a*d - c*b)/(b*d)
	kq.tuso = ps1.tuso*ps2.mauso - ps2.tuso*ps1.mauso;
	kq.mauso = ps1.mauso * ps2.mauso;
	return kq;
}
phanso tichps(phanso ps1,phanso ps2){
	phanso kq;
	// a/b + c/d = (a*c)/(b*d)
	kq.tuso = ps1.tuso * ps2.tuso;
	kq.mauso = ps1.mauso * ps2.mauso;
	return kq;
}
phanso thuongps(phanso ps1,phanso ps2){
	phanso kq;
	// a/b + c/d = (a*d)/(b*c)
	kq.tuso = ps1.tuso * ps2.mauso;
	kq.mauso = ps1.mauso * ps2.tuso;
	return kq;
}
void bai10(){
	struct phanso ps1,ps2;
	printf("Phan so thu 1:\n");
	nhapphanso(&ps1);
	printf("Phan so thu 2:\n");
	nhapphanso(&ps2);
	printf("2 phan so vua nhap la :");
	printf("\t");
	inphanso(ps1);
	printf("\t");
	inphanso(ps2);
	printf("\n");
	printf("Tong: ");inphanso(ps1);printf(" + ");inphanso(ps2);printf(" = ");inphanso(tongps(ps1,ps2));
	printf("\n");
	printf("Hieu: ");inphanso(ps1);printf(" - ");inphanso(ps2);printf(" = ");inphanso(hieups(ps1,ps2));
	printf("\n");
	printf("Tich: ");inphanso(ps1);printf(" * ");inphanso(ps2);printf(" = ");inphanso(tichps(ps1,ps2));
	printf("\n");
	printf("Thuong: ");inphanso(ps1);printf(" / ");inphanso(ps2);printf(" = ");inphanso(thuongps(ps1,ps2));
}
int main(){
	int chon;
	do{
		chon=menu(chon);
		switch(chon){
			case 1:{
				bai1();
				break;
			}
			case 2:{
				bai2();
				break;
			}
			case 3:{
				bai3();
				break;
			}
			case 4:{
				bai4();
				break;
			}
			case 5:{
				bai5();
				break;
			}
			case 6:{
				bai6();
				break;
			}			
			case 7:{
				bai7();
				break;
			}
			case 8:{
				bai8();
				break;
			}
			case 9:{
				bai9();
				break;
			}
			case 10:{
				bai10();
				break;
			}
		}
		getch();
		system("cls");
	}while(chon!=0);
	return 0;
}
