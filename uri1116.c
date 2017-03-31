#include<stdio.h>
int main(){
	int n,x,y,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		if(y == 0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n",(float)(1.0*x/y));


	}
	return 0;


}