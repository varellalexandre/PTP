#include<stdio.h>

char convert(char var){
	return var + 32*(var>=65 && var<=90 ? 1 : -1);
}

int main(int arg, const char * argv[]){
	
	char letra;
	do{
		printf("Digite a letra\n");
		scanf("%c",&letra);
	}while(!((letra>='A'&& letra<='Z') || (letra >='a' && letra<='z')));

	printf("%c\n", convert(letra));
	return 0;
}