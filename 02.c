#include<stdio.h>
int main(){
	int a[10000],i = 0,j,k;
	printf("Entre com os valores: ");
	scanf("%d",&a[i]);
	while(a[i] != -999){
		i++;
		scanf("%d",&a[i]);

	}
	for(j=0;j<i;j++)
		for(k=0;k<i;k++){
			if(j == i-1)
				continue;
			else if(a[j] == 0){
				a[j] = a[j+1];
				a[j+1] = 0;
			}
		}
	printf("Vetor compactado: ");
	for(j=0;j<i;j++)
		printf(" %d",a[j]);

	printf("\n");

}