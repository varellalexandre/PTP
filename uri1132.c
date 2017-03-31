#include<stdio.h>
int main(){
	int x,y,aux,sum=0;
	scanf("%d %d",&x,&y);
	if(x<y){
		aux = y;
		y = x;
		x = aux;
	}

	for(;y<=x;y++){
		if(y%13!=0)
			sum+=y;
	}
	printf("%d\n",sum);
	return 0;
}