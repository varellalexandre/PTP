#include<stdio.h>
int main(){
	double x,y;
	scanf("%lf %lf",&x,&y);

	if(x+y == 0)
		printf("Origem\n");
	else if(x+y == y)
		printf("Eixo Y\n");
	else if(x+y == x)
		printf("Eixo X\n");
	else
		printf("Q%d\n",((x*y>0) ? ((x>0) ? 1 : 3) : ((x>0) ? 4 : 2))); 

	return 0;
	


}