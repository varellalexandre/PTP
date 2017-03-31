/*
Atividade PTP-ITP 
Aluno : Alexandre Guilherme Rodrigues Varella
Matricula : 20170065631 

*/
#include<stdio.h>
int main(){
	int i;
	float nota[5],max = 5,min = 10,sum = 0;/*variavel de máximo com a mínima nota possivel e minimo com a máxima garantindo que funcione*/
	scanf("%f %f %f %f %f",&nota[0],&nota[1],&nota[2],&nota[3],&nota[4]);/*le todas as notas*/
	for(i=0;i<5;i++){
		if(nota[i]>max)
			max=nota[i];/*verifica a nota máxima*/
		if(nota[i]<min)
			min=nota[i];/*verifica a nota minima*/

		sum+=nota[i];/*incrementa a nota a soma*/
	}
	sum-=(max+min);/*elimina o máximo e o mínimo da nota*/
	printf("%.1f\n",sum);/*imprime com precisão de uma casa decimal*/
	return 0;
}
