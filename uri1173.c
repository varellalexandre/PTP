#include<stdio.h>
int main(){
	int x[10],i,num;
	scanf("%d",&num);
	for(i=0;i<10;i++){
		if(i==0)
			x[0] = num;
		else
			x[i] = x[i-1]*2;
		printf("N[%d] = %d\n",i,x[i]);
	}

	return 0;

}