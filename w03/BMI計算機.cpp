#include<stdio.h>
int main (){
    float BMI,A,W,H;
	printf("請輸入身高:       (cm)\n");
	scanf("%f",&H);
    printf("請輸入體重:       (kg)\n");
	scanf("%f",&W);
	A=H/100;
	BMI=W/(A*A);
	printf("BMI=%.1f\n",BMI);
	while (BMI>=0){
	if(BMI>=35){
		printf("過度肥胖\n");
	}
	else if(BMI>=30){
		printf("中度肥胖\n");
	}
	else if(BMI>=27){
		printf("輕度肥胖\n");
	}
	else if(BMI>=24){
		printf("過重\n");
	}
	else if(BMI>=18.5){
		printf("正常體重\n");
	}
	else if(BMI<18.5){
		printf("過輕\n");
	}
	printf("請輸入身高:       (cm)\n");
	scanf("%f",&H);
    printf("請輸入體重:       (kg)\n");
	scanf("%f",&W);
	A=H/100;
	BMI=W/(A*A);
	printf("BMI=%.1f\n",BMI);
    }
}
