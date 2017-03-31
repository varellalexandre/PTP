#include<stdio.h>
int main(){
	int time,speed;
	float spent;
	scanf("%d %d",&time,&speed);

	spent = ((1.0*speed*time)/12);

	printf("%.3f\n",spent);
	return 0;



}