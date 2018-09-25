#include <stdio.h>

int main(){
	int year;
	printf("輸入年份: ");
	scanf("%d",&year); 
	while(year>=0){
		if((year%4==0&&!(year%100==0))||year%400==0)
	        printf("你輸入的年份%d是閏年\n",year);
	    else 
	        printf("你輸入的年份%d不是閏年\n",year);
	    printf("輸入年份: ");
	    scanf("%d",&year); 
	}
	
}
