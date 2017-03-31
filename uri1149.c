#include<stdio.h>
int main(){	
	int a,n,sum=0;
	do{
		scanf("%d %d",&a,&n);

	}while(n<=0);
	for(;n>0;n--,a++)
		sum+=a;

	printf("%d\n",sum);
	return 0;
}