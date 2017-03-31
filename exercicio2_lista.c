/*
Atividade PTP-ITP 
Aluno : Alexandre Guilherme Rodrigues Varella
Matricula : 20170065631 

*/
#include<stdio.h>
int main(){
	int i,copos,latas,quebrados=0,n;
	
	do{
		scanf("%d",&n);
	}while(n<=0||n>100);/*repete até entrar um valor valido*/

	for(i=0;i<n;i++){
		
		scanf("%d %d",&latas,&copos);/*le latas e copos e em seguida incrementa caso latas>copos*/
		if(latas>copos)
			quebrados+=copos;

	}

	printf("%d\n",quebrados);/*imprime a quantidade de copos quebrados*/
	return 0;


}