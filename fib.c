#include<stdio.h>
int fib(int n,int * a){
	*a=*a+1;
	return (n<2 ? n : (fib(n-1,a)+fib(n-2,a)));

}

int main(){
	int k,i=0,a,val;
	int num[1000];
	scanf("%d",&k);

	for(i;i<k;i++){
		scanf("%d",&num[i]);
	}

	for(i=0;i<k;i++){
		a=0;
		val = fib(num[i],&a);
		printf("fib(%d) = %d calls = %d\n",num[i],a-1,val);
	}
	return 0;
}