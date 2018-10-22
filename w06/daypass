#include<stdio.h>
#include <ctype.h>
int leapyear(int year){
    if((year%4==0&&year%100!=0)||year%400==0)
        return 1;
}

int main(){
    int month;
    int day;
    int year;
    int total;
    int M[]={31,28,31,30,31,30,31,31,30,31,30,31};
    char conti=('Y');
    while(conti=='Y'){
    printf("Enter year: ");
    scanf("%d",&year);
    printf("Enter month and day: ");
    scanf("%d %d",&month,&day);
    int days=0;
    M[1]=28;
    if (leapyear(year)==1){M[1]++;}
    for (int i=0;i<month-1;i++){
        days=days+M[i];
    }
    total=days+day;
    printf("%d days passed since 1/1/%d \n",total,year);
    printf("Continue (Y/N)? ");
    getchar();
    conti = toupper(getchar());

    }

}
