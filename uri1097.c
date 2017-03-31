#include<stdio.h>
int main(){
	int i,j=7,jD;
	jD=j-2;
	for(i=1;i<=9;i+=2){
		for(;j>=jD;j--)
			printf("I=%d J=%d\n",i,j);
		
		j+=5;
		jD=j-2;

	}
	return 0;

}