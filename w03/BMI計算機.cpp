#include<stdio.h>
int main (){
    float BMI,A,W,H;
	printf("�п�J����:       (cm)\n");
	scanf("%f",&H);
    printf("�п�J�魫:       (kg)\n");
	scanf("%f",&W);
	A=H/100;
	BMI=W/(A*A);
	printf("BMI=%.1f\n",BMI);
	while (BMI>=0){
	if(BMI>=35){
		printf("�L�תέD\n");
	}
	else if(BMI>=30){
		printf("���תέD\n");
	}
	else if(BMI>=27){
		printf("���תέD\n");
	}
	else if(BMI>=24){
		printf("�L��\n");
	}
	else if(BMI>=18.5){
		printf("���`�魫\n");
	}
	else if(BMI<18.5){
		printf("�L��\n");
	}
	printf("�п�J����:       (cm)\n");
	scanf("%f",&H);
    printf("�п�J�魫:       (kg)\n");
	scanf("%f",&W);
	A=H/100;
	BMI=W/(A*A);
	printf("BMI=%.1f\n",BMI);
    }
}
