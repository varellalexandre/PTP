#include<stdio.h>
int main(){
	int num,i;
	scanf("%d",&num);
	double avg[num],a,b,c;

	for(i = 0; i<num;i++){
		scanf("%lf %lf %lf",&a,&b,&c);
		avg[i] = (2*a+3*b+5*c)/10;


	}
	for(i = 0;i<num;i++)
		printf("%.1lf\n",avg[i]);

	return 0;


}