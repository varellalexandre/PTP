#include<stdio.h>
int main(){
	int num=0,alc=0,gas=0,die=0;
	do{
		do{
			scanf("%d",&num);

		}while(num<1||num>4);
		(num==1?alc++:(num==2?gas++:(num==3?die++:1)));

	}while(num!=4);
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alc);
	printf("Gasolina: %d\n",gas);
	printf("Diesel: %d\n",die);
	return 0;
}