#include<stdio.h>
#include<stdlib.h>
int main(){
	int tam,i;
	scanf("%d",&tam);
	int pA[tam],pB[tam],tempo[tam];
	double cresA[tam],cresB[tam];
	for(i=0;i<tam;i++){
		tempo[i] = 0;
		scanf("%d %d %lf %lf",&pA[i],&pB[i],&cresA[i],&cresB[i]);
		while(pA[i]<=pB[i] && tempo[i]<=){
			pA[i] = (cresA[i]*pA[i])/100+pA[i];
			pB[i] = (cresB[i]*pB[i])/100+pB[i];
			tempo[i]++;
		}
		if(tempo[i]>100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n",tempo[i]);
	}
	return 0;
}