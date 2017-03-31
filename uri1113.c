#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&m,&n);
	while(m!=n){
		printf((m>n?"Decrescente\n":"Crescente\n"));
		scanf("%d %d",&m,&n);
	}
	return 0;
}