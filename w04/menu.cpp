#include <stdio.h>

int main()
{

    int choice,width,height,type;

    while(1)
    {

        printf("menu\n");
        printf("1.Rectangle\n");
        printf("2.Vertical Triangle\n");
        printf("3.Exit\n");
        printf("Enter Option:");
        scanf("%d", &choice);
        if(choice==3)break;
        switch(choice)
        {
        case 1:
            printf("Enter height and width: ");
            scanf("%d %d",&height,&width);
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=width; j++)
                {
                    if(i==1 || i==height || j==1 || j==width)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Enter height type");
            scanf("%d %d",&height,&type);

            switch(type)
            {
            case 1:
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
            case 2:
                for(int i=1; i<=height; i++)
                {
                    for(int j=height; j>=1; j--)
                    {
                        if(i==height || i==j||j==1)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
            case 3:
                for(int i=1; i<=height; i++)
                {
                    for(int j=height; j>=1; j--)
                    {
                        if(i==1 || i==j||j==height)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
            case 4:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=height; j++)
                    {

                        if(i==1 || i==j||j==height)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }

            }
            break;
        }
    }
    return 0;
}
