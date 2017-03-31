#include<stdio.h>
#define H 15
#define L 5
void printArray(int * array,int tam,char nome[]){
	int i = 0;
	for(;i<=tam;i++)
		printf("%s[%d] = %d\n",nome,i,array[i]);

	return;
}
int main(){
	int n,par[L],impar[L],k=0,p=0,i=0;
	for(;k<H;k++){
		scanf("%d",&n);
		if(n%2==0){
			//printf("%d ",p);
			if(p == L-1){
				par[p] = n;
				printArray(par,p,"par");
				p = 0;
			}
			else{
				par[p] = n;
				p++;
			}
			
		}else{
			//printf("%d ",i);
			if(i == L-1){
				impar[i] = n;
				printArray(impar,i,"impar");
				i = 0;
			}else{
				impar[i] = n;
				i++;

			}
			
		}



	}
	printArray(impar,i-1,"impar");
	printArray(par,p-1,"par");

	return 0;
}