#include<stdio.h>
#include<math.h>
int main(){
    int A,B,C,i,Z,D,W; double X1,X2;
    W=3;
    while(W>=0){
    printf("��JA B C:");
    scanf("%d %d %d",&A,&B,&C);
    printf("�� AX^2+BX+C=0 ��ڬ�:\n");
    Z=B*B-4*A*C;
    D=2*A;
    for (i = 1; i <= 1000;i=i+1);
    if(B*B-4*A*C == (i*i) || B*B-4*A*C!=0 && B*B-4*A*C>0){
        X1=(-B+sqrt(B*B-4*A*C))/(2*A);
        X2=(-B-sqrt(B*B-4*A*C))/(2*A);
        printf("X1=%.1f\n",X1);
        printf("X2=%.1f\n",X2);
    }  
    else if(B*B-4*A*C==0){
        X1=(-B+sqrt(B*B-4*A*C))/(2*A);
        printf("���� X=%.1f\n",X1);
    }
    else if(B*B-4*A*C<0){
        printf("�L��\n");
    }
    else {
        printf("X1=(-%d+�ڸ�%d)/%d\n",B,Z,D);
        printf("X2=(-%d-�ڸ�%d)/%d\n",B,Z,D);
    }
    }
}
