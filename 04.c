/* Programa misterio */

#include<stdio.h>

int main()
{
	int a,b,x,y,t,i;

	printf("Digite um par de numeros: ");
	scanf("%d %d",&a,&b);
	printf("(%d %d)\n",a,b);
	x=0;
	y=0;
	while(a != 0){
		x = x + 1;
		t = 1;
		
		for(i=1;i<=b;i++)
			t=t*a;

		printf("ValorX = %d\n",t);
		y=y+t;
		printf("ValorY = %d\n",y);
		printf("Digite um par de numeros: ");
		scanf("%d %d",&a,&b);
		printf("(%d %d)\n",a,b);
	}
	printf("Total de pares: %d\n",x);
	return 0;
}