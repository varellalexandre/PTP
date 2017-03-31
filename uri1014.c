#include<stdio.h>
int main(){
	int x;
	float y,consume;

	scanf("%d %f",&x,&y);

	consume = ((1.0)*x)/y;

	printf("%.3f km/l\n",consume);

	return 0;



}