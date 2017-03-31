#include<stdio.h>
#define size 12
int main(){
	float M[size][size],sum=0;
	int l,i,j;
	char in;

	scanf("%d %c",&l,&in);
	for(i=0;i<size;i++)
		for(j=0;j<size;j++){
			scanf("%f",&M[i][j]);
			if(i == l)
				sum+=M[i][j];

		}

	if(in == 'M')
		sum=sum/size;

	printf("%.1f\n",sum);
	return 0;


}