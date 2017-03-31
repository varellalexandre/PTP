#include<stdio.h>
int main(int agr, const char * argv[]){

	int a,b,c;
	printf("Digite o valor de A B C\n");
	scanf("%d %d %d",&a,&b,&c);

	printf("%d",(a>=b ? (a>=c ? a : c) : (b>=c ? b : c)));

    return 0;
}
