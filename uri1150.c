#include<stdio.h>
int main(){
	int x,z,i,sum=0;
	scanf("%d %d",&x,&z);
	while(z<=x){
		scanf("%d",&z);
	}

	for(i=0;sum<=z;i++){
		sum+=(i+x);
		printf("%d %d %d\n",sum,i,z);
	}

	printf("%d\n",i);	
	return 0;

}