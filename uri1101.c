#include<stdio.h>
void order(int * a,int * b){
	int aux;
	if(*a<*b){
		aux = *a;
		*a = *b;
		*b = aux;
	}
	return;
}
int main(){
	int m,n,i,sum = 0;
	scanf("%d %d",&m,&n);
	order(&m,&n);
	while(m>0 && n>0){
		for(i=n;i<=m;i++){
			sum+=i;
			printf("%d ",i);
		}
		printf("sum=%d\n",sum);
		sum = 0;
		scanf("%d %d",&m,&n);
		order(&m,&n);

	}
	return 0;

}