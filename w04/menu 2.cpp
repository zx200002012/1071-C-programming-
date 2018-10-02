#include <stdio.h>

void prchar(char C, int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("%c",C);
    }
}

void drawRectan(int height, int width,int filled)
{
    if(filled)
    {
        for(int l=1; l<=height; l++)
        {
            prchar('*',width);

            printf("\n");
        }
    }
    else
    {
        for(int l=1; l<=height; l++)
        {
            for(int j=1; j<=width; j++)
            {
                if(l==1 || l==height || j==1 || j==width)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}
void drawTriang(int height,int type,int filled)
{
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int l=1;l<=height;l++){
                prchar('*',l);
                printf("\n");
            }

        }
     else
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=height; j++)
            {

                if(i==height || i==j||j==1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
        break;
    case 2:
        if(filled){
            for(int l=1;l<=height;l++){
                prchar(' ',height-l);
                prchar('*',l);
                printf("\n");
            }
        }
        else{
            for(int l=1; l<=height; l++)
            {
            for(int j=height; j>=1; j--)
            {
                if(l==height || l==j||j==1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
            }
        }
        break;
    case 3:
        if(filled){
            for(int l=1;l<=height;l++){
                prchar('*',height-l+1);
                printf("\n");
            }
        }
        else{for(int i=1; i<=height; i++)
        {
            for(int j=height; j>=1; j--)
            {
                if(i==1 || i==j||j==height)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }}
        break;
    case 4:
        if(filled){
            for(int l=1;l<=height;l++){
                prchar(' ',l-1);
                prchar('*',height-l+1);
                printf("\n");

            }
        }
        else{for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=height; j++)
            {

                if(i==1 || i==j||j==height)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }}
        break;
    }
}
int main()
{

    int choice,width,height,type,filled;

    while(1)
    {

        printf("menu\n");
        printf("1.Rectangle\n");
        printf("2.Vertical Triangle\n");
        printf("3.Tsosceles Triangle\n");
        printf("4.Exit\n");
        printf("Enter Option:");
        scanf("%d", &choice);
        if(choice==4)break;
        switch(choice)
        {
        case 1:
            printf("Enter height , width , filled: ");
            scanf("%d %d %d",&height,&width,&filled);
            drawRectan(height,width,filled);
            break;
        case 2:
            printf("Enter height type filled: ");
            scanf("%d %d %d",&height,&type,&filled);
            drawTriang(height,type,filled);
            break;
        case 3
        }

    }
    return 0;
}


