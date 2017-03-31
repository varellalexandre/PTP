#include<stdio.h>
#define N 100
int main(){
	int i;
	double t,v[N];
	scanf("%lf",&t);
	v[0] = t;

	for(i=1;i<N;i++)
		v[i] = v[i-1]/2;

	for(i=0;i<N;i++)
		printf("N[%d] = %.4lf\n",i,v[i]);
	

	return 0;

}