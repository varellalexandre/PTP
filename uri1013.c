#include<stdio.h>

int main(){
	int a,b,c,gt;
	scanf("%d %d %d",&a,&b,&c);

	gt = a;
	if(gt<b)
		gt = b;
	if(gt<c)
		gt = c;

	printf("%d eh o maior\n",gt);

	return 0;
}