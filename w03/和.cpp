#include<stdio.h>
int main (){
	int sum=0,N1,N2;
	printf("Enter N1 N2: \n");
	scanf("%d %d",&N1,&N2);
	while(N1>=0 && N2>=0){
		for(N1;N1<=N2;N1++){
		sum+=N1;
		}
	printf("sum=%d\n",sum);
	sum=0;
	printf("Enter N1 N2: \n");
	scanf("%d %d",&N1,&N2);	
	}
}

