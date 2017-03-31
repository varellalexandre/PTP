#include<stdio.h>
#define size 2
int main(){
	float M[size][size],sum=0;
	int i,j,el=0;
	char in;

	scanf("%c",&in);
	for(i=0;i<size;i++)
		for(j=0;j<size;j++){
			scanf("%f",&M[i][j]);
			if(j+i > (size-1)){
				sum+=M[i][j];
				el++;
			}

		}

	if(in == 'M')
		sum=sum/el;

	printf("%.1f\n",sum);
	return 0;


}

