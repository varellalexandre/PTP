#include<stdio.h>
int main(){
	int x,i,sum;
	scanf("%d",&x);
	while(x!=0){
		sum=0;
		if(x%2==1||x%2==-1)
			x++;
		for(i=0;i<5;i++)
			sum+=(x+2*i);

		printf("%d\n",sum);
		scanf("%d",&x);
	}

	return 0;
}