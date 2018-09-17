#include<stdio.h>

int main(){
    float C, F;
	printf("輸入攝氏溫度(C):");
	scanf("%f",&C);
	F = C*9/5+32;
	printf("%.1f C=%.1f F\n\n", C,F );
	printf("輸入華氏溫度(F):");
	scanf("%f",&F);
	C = (F-32)*5/9;
	printf("%.1f F=%.1f C",F,C);
	
}




/*
Enter temperature in C: 20.5
20.5 C = 68.9 F

Enter temperature in F: 80.5
80.5 F = 26.9 F*/

