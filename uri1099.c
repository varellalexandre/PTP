#include<stdio.h>
int main(){
	int n,x,y,i=0,sum=0,aux;
	scanf("%d",&n);
	for(;i<n;i++){
		scanf("%d %d",&x,&y);
		if(x>y){
			aux = x;
			x = y;
			y = aux;
		}

		if(x%2==0)
			x++;
		else
			x+=2;

		for(;x<y;x+=2)
			sum+=x;

		printf("%d\n",sum);
		sum = 0;
	}
	return 0;

}