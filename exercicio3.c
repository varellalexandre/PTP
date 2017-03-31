#include<stdio.h>
int main(){
	int m,n,i,j,t;
	
	printf("Digite o valor de m\n");
	scanf("%d",&m);
	int a[m];
	printf("Digite os valores do vetor a\n");
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	
	printf("Digite o valor de n\n");
	scanf("%d",&n);
	int b[n];
	printf("Digite os valores do vetor b\n");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);

	int aux[m+n];
	
	for(i=0;i<m;i++)//Cria um vetor só com os dois vetores digitados
		aux[i] = a[i];
	for(;i<m+n;i++)
		aux[i] = b[i-m];

	for(i=0;i<m+n;i++)//Ordena o vetor
		for(j=0;j<m+n;j++)
			if(aux[i]<aux[j]){
				t = aux[i];
				aux[i] = aux[j];
				aux[j] = t;
			}

	t=0;

	for(i=0;i<m+n-1;i++)//conta o número de repetições
		if(aux[i] == aux[i+1])
			t++;

	int final[m+n-t];//Cria um vetor com tamanho sem os números repetidos
	t=0;
	
	for(i=0;i<m+n-1;i++)//Popula o vetor sem os números repetidos
		if(aux[i] != aux[i+1]){
			final[t] = aux[i];
			t++;
		}

	if(aux[m+n-1] != final[t-1]){//verifica o ultimo elemento que não foi lido no for
		final[t] = aux[m+n-1];
		t++;
	}

	for(i=0;i<t;i++)//imprime o novo vetor
		printf("%d ",final[i]);
	printf("\n");
	
	return 0;
}



