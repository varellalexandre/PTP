#include<stdio.h>
#define N 1000
int main(){
	int i,j,t,v[N];
	scanf("%d",&t);
	for(i=0,j=0;i<N;i++,j++){
		if(j==t)
			j=0;

		v[i] = j;

		printf("N[%d] = %d\n",i,v[i]);
	}

	return 0;

}