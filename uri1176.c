#include<stdio.h>
#include<stdlib.h>
#define H 60
unsigned long long int * fibo(){
	unsigned long long int *f,i;
	f = malloc(H*sizeof(*f));
	f[0] = 0;
	f[1] = 1;
	for(i = 2;i<H;i++)
		f[i] = f[i-1]+f[i-2];

	return f;

}
int main(){
	unsigned long long int i,n,*f,value;
	f = fibo();
	scanf("%llu",&n);
	for(i=0;i<n;i++){
		scanf("%llu",&value);
		printf("Fib(%llu) = %llu\n",value,f[value]);


	}
	return 0;




}