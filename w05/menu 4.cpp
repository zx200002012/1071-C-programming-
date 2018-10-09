#include<stdio.h>
void prchar(char C,int n)
{
    for (int i=1; i<=n; i++)
    {

        printf("%c",C);
    }
}

int encode(int N)
{
    int a,b,c,d,e,cdeb;
    a=N%10000/1000;
    b=N%1000/100;
    c=N%100/10;
    d=N%10;
    e=(a+5)%10;
    cdeb=(c*1000.)+(d*100.)+(e*10.)+(b*1.);

    return cdeb;
}
int decode(int N)
{
    int a,b,c,d,e,f;
    a=N%10000/1000;
    b=N%1000/100;
    c=N%100/10;
    d=N%10;
    if(c<5)
        e=c+5;

    if(c>=5)
        e=c-5;
    f=(e*1000.)+(d*100.)+(a*10.)+(b*1.);
    return f;

}

void Tri(int height)
{
    for(int i=1; i<=height; i++)
    {
        prchar(' ',height-i);
        prchar('*',i);
        printf("  ");
        prchar('*',i);
        printf("\n");
    }

}


int main()
{
    int X,Y,a,b,c,d,e,choice;
    while(1)
    {
        printf("(1) Arithmetic Computation\n(2) List BMI ranges\n(3) Draw Four Vertical Triangles\n(4) encode(n)\n(5) decode(n)\n(6) Exit\n=>");
        scanf("%d",&choice);
        if(choice==6)
            return 0;
        switch(choice)
        {
        case 1:

            printf("Enter X,Y : ");
            scanf("%d %d",&X,&Y);
            if(X==-1||Y==-1)
            {
                printf("Bye! Coding by 407410470");
                return 0;
            }

            a=X+Y;
            b=X-Y;
            c=X*Y;
            d=X/Y;
            e=X%Y;
            printf("X + Y = %d \nX - Y = %d\nX * Y = %d \nX / Y = %d\nX %% Y = %d\n",a,b,c,d,e);
            break;

        case 2:
            float w1,w2,H;
            int height1,height2;
            printf("Enter height: ");
            if(height1==-1||height2==-1)
            {
                printf("Bye! Coding by 407410470");
                return 0;
            }
            scanf("%d %d",&height1,&height2);
            for (int i=height1; i<=height2; i++)
            {
                H=i/100.;
                w1=18.5*(H*H);
                w2=24*(H*H);
                printf("%4d cm: %.1f ~ %.1f (kg)\n",i,w1,w2);
            }
            break;
        case 3:
            int height;
            printf("Enter height: ");
            scanf("%d",&height);
            if(height==-1)
            {
                printf("Bye! Coding by 407410470");
                return 0;
            }
            Tri(height);
            break;
        case 4:
            int N;
            printf("Enter N (-1 to exit): ");
            scanf("%d",&N);
            if(N==-1)
            {
                printf("Bye! Coding by 407410470");
                return 0;
            }
            printf("%d\n",encode(N));
            break;
        case 5:
            printf("Enter N (-1 to exit): ");
            scanf("%d",&N);
            if(N==-1)
            {
                printf("Bye! Coding by 407410470");
                return 0;
            }
            printf("%d\n",decode(N));
            break;


        }
    }
}
