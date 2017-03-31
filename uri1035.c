#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	char cond1,cond2,cond3,cond4,cond5;
	cond1 = (b>c);
	cond2 = (d>a);
	cond3 = ((c+d)>(a+b));
	cond4 = (c > 0)&&(d > 0);
	cond5 = (a%2==0);
	if(cond1 && cond2 && cond3 && cond4 && cond5)
		printf("Valores aceitos\n");
	else
		printf("Valores nao aceitos\n");



	return 0;

}