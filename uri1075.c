#include<stdio.h>
int main(){
	int n,i=1;
	scanf("%d",&n);
	if(n<=2)
		return 0;
	else
		printf("2\n");
	
	for(i=n+2;i<=10000;i+=n){
		if(i%n==2)
			printf("%d\n",i);	
	}
	return 0;

}