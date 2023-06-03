#include <stdio.h>
#include <string.h>
int main(){
	char tk[10]="admin";
	char mk[10]="12345";
	int i;
	char user[100],pass[100];
	printf("Nhap tai khoan: ");gets(user);
	printf("Nhap mat khau: ");gets(pass);
	if(strcmp(tk,user) || strcmp(mk,pass)){
		printf("Dang nhap that bai");
		if(strcmp(user,"admin")!=0){
			printf("\nSai tai khoan");
			do{
				printf("\nNhap tai khoan: ");gets(user);
			}while(strcmp(user,"admin")!=0);
		}
		if(strcmp(pass,"12345")!=0){
			printf("\nSai mat khau");
			do{
				printf("\nNhap mat khau: ");gets(pass);			
			}while(strcmp(pass,"12345")!=0);
		}
		printf("Dang nhap thanh cong");
	}
	else 
		printf("Dang nhap thanh cong");
	return 0;
}
