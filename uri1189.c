#include<stdio.h>
#define size 12
int main(){
	double M[size][size],sum=0;
	int i,j,el=0;
	char o;

	scanf("%c",&o);
	for(i=0;i<size;i++)
		for(j=0;j<size;j++){
			scanf("%lf",&M[i][j]);
			if(j+i < (size-1) && i>j){
				sum+=M[i][j];
				el++;
			}

		}

	if(o == 'M')
		sum=sum/el;

	printf("%.1lf\n",sum);
	return 0;


}