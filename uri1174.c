#include<stdio.h>
#define H 5
int main(){
	
	int i;
	double x[H];
	for(i=0;i<H;i++)
		scanf("%lf",&x[i]);
	
	for(i=0;i<H;i++)
		(x[i]<=10?printf("A[%d] = %.1lf\n",i,x[i]):1);

	return 0;
}