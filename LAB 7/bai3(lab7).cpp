#include <stdio.h>
#include <string.h>
int main(){
	char s[4][32];
	float diem[4];
	float tempd;
	char temp[32];
	for(int i=0;i<4;i++){
		printf("\nNhap chuoi %d: ",i+1);gets(s[i]);
		printf("\nNhap diem %d: ",i+1);scanf("%f",&diem[i]);fflush(stdin);
	}
	for(int i=0;i<4-1;i++){
		for(int j=i+1;j<4;j++){
			if(strcmp(s[i],s[j])>0){
				strcpy(temp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp);
				tempd=diem[i];
				diem[i]=diem[j];
				diem[j]=tempd;
			}
		}
	}
	printf("\nSap xep chuoi theo chu cai");
	for(int i=0;i<4;i++){
		printf("\nChuoi %d: %s",i+1,s[i]);
		printf("\n diem %d: %.2f",i+1,diem[i]);
	}
	return 0;
}
