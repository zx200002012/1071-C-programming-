#include<stdio.h>
#include<math.h>
int main(){
	int A,B,C; double X1,X2;
	printf("��JA B C:");
	scanf("%d %d %d",&A,&B,&C);
	printf("�� AX^2+BX+C=0 ��ڬ�:\n");
	if(B*B-4*A*C>=0){
		X1=(-B+sqrt(B*B-4*A*C))/(2*A);
		X2=(-B-sqrt(B*B-4*A*C))/(2*A);
		printf("X1=%.1f\n",X1);
		printf("X2=%.1f",X2);
	}
	else{
		printf("�L��");
	}
}
