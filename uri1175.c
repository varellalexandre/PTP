#include<stdio.h>
#define H 20
int main(){
	
	int i,aux;
	int x[H];
	for(i=0;i<H;i++)
		scanf("%d",&x[i]);
	
	for(i=0;i<(H/2);i++){
		aux = x[i];
		x[i] = x[H-i-1];
		x[H-i-1] = aux;

	}
	
	for(i=0;i<H;i++)
		printf("N[%d] = %d\n",i,x[i]);

	return 0;
}
