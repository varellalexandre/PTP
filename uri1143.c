#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%d %d %d\n",i,(int) pow(i,2),(int) pow(i,3));

	return 0;
}