#include<stdio.h>
int main(){
	int n = 1;
	float x,y;
	do{	
		scanf("%f",&x);
		while(x<0 || x>10){
			printf("nota invalida\n");
			scanf("%f",&x);


		}
		scanf("%f",&y);
		while(y<0 || y>10){
			printf("nota invalida\n");
			scanf("%f",&y);


		}
		printf("media = %.2f\n",(x+y)/2);
		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&n);
		}while(!(n>=1&&n<=2));
	}while(n==1);
	return 0;
}