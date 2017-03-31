#include<stdio.h>
int main(){
	int n,i,j,num,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum = 0;
		scanf("%d",&num);
		for(j=1;j<num;j++){
			if(num%j==0)
				sum+=j;

		}

		if(num == sum)
				printf("%d eh perfeito\n",num);
			else
				printf("%d nao eh perfeito\n",num);
		}


	return 0;
}

	


