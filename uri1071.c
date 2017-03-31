#include<stdio.h>
int main(){
	int x,y,aux,sum = 0;
	scanf("%d %d",&x,&y);
	if(x<y){
		aux = x;
		x = y;
		y = aux;
	}

	for(y++;y<x;y++){
		if(y%2==1 || y%2==-1)
			sum+=y;

	}
	printf("%d\n",sum);
	return 0;

}