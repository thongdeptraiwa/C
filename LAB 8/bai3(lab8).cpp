#include<stdio.h>
#include<string.h>
struct SinhVien{
	char mssv[10];
	char ten[50];
	char nganh[50];
	float diemTB;
};
int main(){
	SinhVien sv[100];
	int n;
	do{
		printf("\nNhap so luong sv: ");scanf("%d",&n);
	}while(n<1||n>100);
	
	for(int i=0;i<n;i++){
		printf("\n*Sinh Vien thu %d\n",i+1);
		printf("Nhap MSSV: ");fflush(stdin);gets(sv[i].mssv);
		printf("Nhap ten sv: ");fflush(stdin);gets(sv[i].ten);
		printf("Nhap nganh hoc cua sv: ");fflush(stdin);gets(sv[i].nganh);
		printf("Nhap diem TB cua sv: ");fflush(stdin);scanf("%f",&sv[i].diemTB);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(sv[i].diemTB>sv[j].diemTB){
				SinhVien temp;
				temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
			}	
		}
	}
	
	printf("\n%10s \t %20s \t %20s \t %10s","MSSV","Ten","Nganh","Diem TB");
	for(int i=0;i<n;i++){
		printf("\n%10s \t %20s \t %20s \t %8.2f",sv[i].mssv,sv[i].ten,sv[i].nganh,sv[i].diemTB);
	}
	
	char tim[10];
	int kt=0;
	do{
		printf("\nNhap MSSV ban muon tim: ");fflush(stdin);gets(tim);
		for(int i=0;i<n;i++){
			if(strcmp(sv[i].mssv,tim)==0)
				kt++;
		}
	}while(kt==0);
	
	for(int i=0;i<n;i++){
		if(strcmp(sv[i].mssv,tim)==0){
				printf("\n%10s \t %20s \t %20s \t %8.2f",sv[i].mssv,sv[i].ten,sv[i].nganh,sv[i].diemTB);
		}
	}
			
	return 0;
}
