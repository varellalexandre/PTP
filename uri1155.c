#include<stdio.h>
int main(){
	double s=0;
	int i = 1;
	for(;i<=100;i++)
		s+=(1.0/i);

	printf("%.2lf\n",s);
	return 0;


}