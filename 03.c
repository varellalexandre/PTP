#include<stdio.h>
int main(){
	int num,
	aux,
	reverso;

	printf("Digite um inteiro positivo: ");
	scanf("%d",&num);//& no scanf
	
	aux = num;
	reverso = 0;
	
	while(aux!=0){	
		reverso = reverso*10+(aux%10);
		aux = aux/10;
	}

	if(reverso!=num)//usar o != em vez de =
		printf("%d nao e um palindromo\n",num);
	else
		printf("%d e um numero palindromo\n",num);
	
	return 0;

}