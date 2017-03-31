#include<stdio.h>
int main(){
	int n,i=0,r,num,j,sum;
	scanf("%d",&n);
	for(;i<n;i++){
		scanf("%d %d",&num,&r);
		sum=0;
		if(num%2==0)
			num++;

		for(j=0;j<r;j++)
			sum+=num+2*j;

		printf("%d\n",sum);
		
	}
	return 0;


}