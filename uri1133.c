#include<stdio.h>
int main(){
	int x,y,aux;
	scanf("%d %d",&x,&y);
	if(x<y){
		aux = x;
		x = y;
		y = aux;

	}

	for(y=y+1;y<x;y++){
		if(y%5==2||y%5==3)
			printf("%d\n",y);

	}
	return 0;

}