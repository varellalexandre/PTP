#include<stdio.h>
int main(){
	int n,i=1,k=0,j=1,aux;
	scanf("%d",&n);
	for(;i<=n;i++){
		if(i==n)
			printf("%d\n",k);
		else	
			printf("%d ",k);
		aux = k;
		k = j;
		j = k+aux;
			
	}
	
	return 0;



}