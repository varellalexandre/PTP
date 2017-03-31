#include<stdio.h>
int main(){
	int i=0,j=0,k=0,n,aux;
	int matriz[100][100];
	scanf("%d",&n);
	while(n>0){
		aux = n; 
		while(aux>=0){
			for(i=0;i<aux;i++)
				for(j=0;j<aux;j++)
					matriz[i+k][j+k]=k+1;
			
			aux-=2;
			k++;
		}

		for(i=0;i<n;i++)
			for(j=0;j<n;j++){
				if(j==n-1)
					printf("%-3d\n",matriz[i][j]);
				else
					printf("%-3d",matriz[i][j]);
			}
		printf("   \n");
		scanf("%d",&n);
		k=0;
	}
	
	return 0;
}