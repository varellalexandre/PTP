#include<stdio.h>
int main(){
	int array[10],i=0,n,sum = 0;
	printf("Digite os valores do array\n");
	for(;i<10;i++)
		scanf("%d",&array[i]);

	scanf("%d",&n);
	while(n!=0){
		printf("Digite o valor de M\n");
		scanf("%d",&n);
		if(n==0)
			return 0;
		for(i=0;i<10;i++){
			if(array[i] == n)
				sum++;

		}
		printf("ocorre %d vez(es)\n",sum);
		sum = 0;
	}

}