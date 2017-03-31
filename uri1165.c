#include<stdio.h>
int main(){
	char primo = 0;
	int i,n,j,repeat;
	scanf("%d",&repeat);
	for(j=0;j<repeat;j++){
		primo = 0;
		scanf("%d",&n);
		for(i=2;i<n;i++){
			if(n%i==0){
				primo=1;
				break;
			}
		}
		(primo? printf("%d nao eh primo\n",n):printf("%d eh primo\n",n));
	}
	return 0;
}