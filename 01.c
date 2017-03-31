#include<stdio.h>
int main(){
	int n,sum,i,m;
	printf("Entre com o valor de M: ");
	scanf("%d",&m);
	printf("Numeros perfeitos entre 0 e %d:",m);
	for(n = 1;n<m;n++){
		sum = 0;
		for(i = 1;i<n;i++)
			if(n%i==0)
				sum+=i;

		if(sum == n)
			printf(" %d",n);	
	}	
	printf("\n");

	return 0;
}