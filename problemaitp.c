#include<stdio.h>
#include<stdlib.h>
float * escalar(float *a,float *b,int sizeA,int sizeB){
	int aux,i=0;
	if(sizeA <= sizeB)
		aux = sizeA;
	else if(sizeA>sizeB)
		aux = sizeB;

	float * prodEscalar;
	prodEscalar = malloc(aux*4);

	for(;i<aux;i++)
		prodEscalar[i] = a[i]*b[i];

	return prodEscalar;
}

int main(){
	float * a, *b;
	float * prod;
	float sum = 0;
	int n;
	printf("digite o tamanho do array\n");
	scanf("%d",&n);
	a = malloc(4*n);
	b = malloc(4*n);
	int i=0;

	for(;i<n;i++){
		printf("Escreva os valores de a%d e b%d\n",i,i);
		scanf("%f %f",&a[i],&b[i]);
	}

	prod = escalar(a,b,n,n);
	
	for(i=0;i<n;i++)
		sum+=prod[i];

	printf("%.1f\n",sum);
	
	free(a);
	free(b);
	free(prod);


	return 0;

}