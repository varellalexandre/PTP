#include<stdio.h>
int main(){
	int num,sum = 0,i;
	for(i = 0;i<5;i++){
		scanf("%d",&num);
		if(num%2==0)
			sum++;
	}
	printf("%d valores pares\n",sum);
	return 0;
}