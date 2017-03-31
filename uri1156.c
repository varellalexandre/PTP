#include<stdio.h>
int main(){
	double s = 0;
	int i = 1,m = 1;
	for(;i<=39;i+=2){
		s+=(1.0*i/m);
		m*=2;
	}

	printf("%.2lf\n",s);
	return 0;


}