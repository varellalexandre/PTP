#include<stdio.h>

int main(int arg, const char * argv []){
	
	int a,b,aux;
	printf("Digite o valor de a e b\n");
	scanf("%d %d",&a,&b);				

	if(a<b){
		aux = b;
		b = a;
		a = aux;


	}
	aux = -1;
	while(aux < a){
		aux += b;
		b++;


	}

	printf("%s",(((aux-a )%2 ? "Gollum Vence\n" : "Bilbo vence\n")));



}