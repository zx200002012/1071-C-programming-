#include <stdio.h>

int main(){
	int year;
	printf("��J�~��: ");
	scanf("%d",&year); 
	if((year%4==0&&!(year%100==0))||year%400==0)
	  printf("�A��J���~��%d�O�|�~",year);
	else 
	printf("�A��J���~��%d���O�|�~",year);
}
