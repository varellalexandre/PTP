#include<stdio.h>
int main(){
	int n,i = 0,num,sum = 0;
	scanf("%d",&n);
	for(;i<n;i++){
		scanf("%d",&num);
		if(num<=20 && num>=10)
			sum++;


	}
	printf("%d in\n",sum);
	printf("%d out\n",n-sum);
	return 0;


}