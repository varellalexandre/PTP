#include<stdio.h>
int main(){
	int n,sum=0,i=0;
	scanf("%d",&n);
	while(n>0){
		sum += n;
		i++;
		scanf("%d",&n);


	}
	printf("%.2f\n",(1.0*sum/i));
	return 0;

}