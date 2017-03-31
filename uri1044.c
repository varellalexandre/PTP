#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf((a%b==0||b%a==0)?"Sao Multiplos\n" :"Nao sao Multiplos\n");
	return 0;
}