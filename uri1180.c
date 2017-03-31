#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*x,menor = 32767,i,pos;
	scanf("%d",&n);
	x = malloc(n*sizeof(*x));
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		if(x[i]<menor){
			menor = x[i];
			pos = i;
		}


	}
	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",pos);
	return 0;
}