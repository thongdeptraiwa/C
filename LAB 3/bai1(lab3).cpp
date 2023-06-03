#include <stdio.h>
#include <math.h>
int main(){f
	float diem;
	printf("Nhap diem: ");scanf("%f",&diem);
	if(diem<0 || diem>10){
		printf("Ban da nhap sai\n");
	}else{
		if(diem>=9)
			printf("Hoc luc xuat sac");
		else
			if(diem>=8)
				printf("Hoc luc gioi");			
			else
				if(diem>=6.5)
					printf("Hoc luc kha");			
				else
					if(diem>=5)
						printf("Hoc luc trung binh");
					else
						if(diem>=3.5)	
							printf("Hoc luc yeu");	
								else 
									printf("Hoc luc kem");	
	}
	return 0;
}
