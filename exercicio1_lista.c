/*
Atividade PTP-ITP 
Aluno : Alexandre Guilherme Rodrigues Varella
Matricula : 20170065631 

*/
#include<stdio.h>
int main(){
	char prova[81],gabarito[81];/*havia a possibilidade de declarar um vetor e usar alocação dinamica para melhorar a utilização de memória*/
	int n,i,acertos=0;/*acumulador de acertos*/
	do{
		scanf("%d",&n);
	}while(n<=0||n>80);/*repete até que seja digitado um número valido*/

	scanf("%s",prova);/*le as questoes da prova*/

	scanf("%s",gabarito);/*le o gabarito*/

	for(i=0;i<n;i++)
		((gabarito[i]==prova[i])?acertos++:1);/*verifica se a questao está certa, o 1 no ternario é apenas para dar uma resposta,é feio eu sei*/
			
	
	printf("%d\n",acertos);/*imprime os acertos*/
	return 0;


}