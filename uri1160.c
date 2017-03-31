#include<stdio.h>
#include<stdlib.h>
int main(){
	int * pA, * pB, tam,i,*tempo;
	double *cresA, *cresB;
	//int tam,i;
	scanf("%d",&tam);
	tempo = (int *) malloc(tam*sizeof(*tempo));
	pA = (int *) malloc(tam*sizeof(*pA));
	pB = (int *) malloc(tam*sizeof(*pB));
	cresA = (double *) malloc(tam*sizeof(*pA));
	cresB = (double *) malloc(tam*sizeof(*pB));
	
	for(i=0;i<tam;i++){
		tempo[i] = 0;
		scanf("%d %d %lf %lf",&pA[i],&pB[i],&cresA[i],&cresB[i]);
		while(pA[i]<=pB[i] && tempo[i] <= 100){
			pA[i] = (cresA[i]+100)*pA[i]*0.01;//
			pB[i] = (cresB[i]+100)*pB[i]*0.01;
			tempo[i]++;
		}
		if(tempo[i]>100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n",tempo[i]);
	}

	free(tempo);
	tempo=NULL;
	free(pA);
	pA = NULL;
	free(pB);
	pB = NULL;
	free(cresA);
	cresA = NULL;
	free(cresB);
	cresB = NULL;
	
	return 0;
}