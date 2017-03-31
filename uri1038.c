#include<stdio.h>
int main(){
	int num,qnt;
	float preco;
	scanf("%d %d",&num,&qnt);

	switch(num){
		case 1:
			preco = 4*qnt;
			break;
		case 2:
			preco = 4.5*qnt;
			break;
		case 3:
			preco = 5*qnt;
			break;
		case 4:
			preco = 2*qnt;
			break;
		case 5:
			preco = 1.5*qnt;
			break;

	}
	printf("Total: R$ %.2f\n",preco);

	return 0;
}