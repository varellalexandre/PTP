#include<stdio.h>
int main(){
	int i=1,n;
	scanf("%d",&n);
	for(i;i<=n;i++)
		n%i==0?printf("%d\n",i):1;

	return 0;

}