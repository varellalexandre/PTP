#include<stdio.h>
int main(){
	int fac=1,i=1,n;
	scanf("%d",&n);
	for(;i<=n;i++)
		fac*=i;
	printf("%d\n",fac);

	return 0;
}