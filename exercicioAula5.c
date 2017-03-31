#include<stdio.h>
#include<stdlib.h>
void verifica(int ** matriz,int a,int b);
void nula(int ** matriz,int a,int b);
int ** populaMatriz(int a,int b);
void exercicio1();
void exercicio2();

void verifica(int ** matriz,int a,int b){
	int ** verifier,i,j,tam=a*b;
	verifier = (int **) malloc(a*b*sizeof(int *));
	for(i=0;i<(a*b);i++)
		verifier[i] = (int *) calloc(2,sizeof(int *));

	

	for(i = 0;i<a;i++)
		for(j = 0;j<b;j++)
			verifier[((b)*i)+j][0] = matriz[i][j];
			
		
	
	
	for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
			if(verifier[i][0] == verifier[j][0])
					verifier[i][1]++;

	for(i=0;i<tam;i++)
		if(verifier[i][1]>1){
			printf("Numero %d repetiu %d vez(es)\n",verifier[i][0],verifier[i][1]);
			for(j=0;j<tam;j++)
				if(verifier[j][0]==verifier[i][0])
					verifier[j][1]=0;
			
		}		

	for(i=0;i<tam;i++)
		for(j=0;j<2;j++)
			free(verifier[i]);
	free(verifier);
	
}

void nula(int ** matriz,int a,int b){
	int *m,lin = 0,col = 0,i,j;
	m = (int *) calloc(2,sizeof(*m));

	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(matriz[i][j] != 0)
				break;
			
			lin++;
		}
		if(lin == b){
			m[0]++;
			printf("linha:%d\n",i+1);
		}
		lin = 0;
	}
	
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			if(matriz[j][i] != 0)
				break;
			
			col++;
		}

		if(col == a){
			m[1]++;
			printf("coluna:%d\n",i+1);
		}
		col = 0;
		
	}

	printf("%d linha(s) \n%d coluna(s)\n",m[0],m[1]);

	
}

int ** populaMatriz(int a,int b){
	int i,j;
	int ** matriz;
	matriz = (int **) malloc(a*sizeof(int *));
	for(i = 0;i<a;i++){
		matriz[i] = (int *) malloc(b*sizeof(int *));
		
		for(j = 0;j<b;j++)
			scanf("%d",&matriz[i][j]);
	}

	return matriz;
}

void exercicio1(){
	int a,b,i,j;
	int ** matriz;
	printf("-------EXERCICIO 1-----\nDigite o valor de linhas e colunas\n");
	scanf("%d %d",&a,&b);

	matriz = populaMatriz(a,b);
	verifica(matriz,a,b);
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			free(matriz[i]);
	free(matriz);
}

void exercicio2(){
	int a,b,i,j;
	int ** matriz;
	printf("-------EXERCICIO 2-----\nDigite o valor de linhas e colunas\n");
	scanf("%d %d",&a,&b);

	matriz = populaMatriz(a,b);
	nula(matriz,a,b);
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			free(matriz[i]);
	free(matriz);

	

}
int main(){
	exercicio1();
	exercicio2();	

	return 0;


}