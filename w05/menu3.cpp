#include<stdio.h>

int leapyear(int year){
        if ((year%4==0&&!(year%100==0))||year%400==0)
            return 1;
        else
            return 0;
    }


int second(int hh,int mm,int ss){
    return hh*3600+mm*60+ss;
}

int main(){
    int choice,year,hh,mm,ss;
    while(1){
        printf("Main menu\n");
        printf("1. leapyear \n");
        printf("2. timeconvert\n");
        printf("3. exit\n");
        printf("=>");
        scanf("%d",&choice);
        if(choice==3)
            break;
        switch(choice){
        case 1:
            printf("Enter year:");
            scanf("%d",&year);
            if (leapyear(year))
                 printf("%d is leap year\n",year);
            else
                printf("%d is not leap year\n",year);

            break;
        case 2:
            printf("Enter hh:mm:ss: ");
            scanf("%d:%d:%d",&hh,&mm,&ss);
            printf("%02d:%02d:%02d = %d\n", hh,mm,ss,second(hh,mm,ss));
            break;

        }


    }


}
