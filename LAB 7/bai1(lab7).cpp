#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int n,p;
	printf("Nhap chuoi: ");gets(s);
	int i=0;
	while(s[i]!='\0'){
		if(s[i]>=97&&s[i]<=122 || s[i]>=65&&s[i]<=90){
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
				n++;
			else 
				p++;
		}
		i++;
	};
	printf("\nChuoi %s co chua: %d nguyen am va %d phu am",s,n,p);
	return 0;
}
