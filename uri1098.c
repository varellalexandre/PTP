#include<stdio.h>
int main(){
	int i=0,j;
	while(i<=20){
		for(j=1;j<=3;j++){
			if(i%10 == 0)
				printf("I=%.0f J=%.0f\n",(float)i/10,(float)(j+(i/10.0)));
			else
				printf("I=%.1f J=%.1f\n",(float)i/10,(float)(j+(i/10.0)));
		}
		i+=2;

	}

	return 0;


}