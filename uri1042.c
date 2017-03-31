#include<stdio.h>
int main(){
	int pill[3],aux,i,j,auxPill[3];
	scanf("%d %d %d",&pill[0],&pill[1],&pill[2]);
	for(i=0;i<3;i++)
		auxPill[i]=pill[i];

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(pill[j]>pill[i]){
				aux = pill[i];
				pill[i] = pill[j];
				pill[j] = aux;	

			}
		}

	}
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",pill[0],pill[1],pill[2],auxPill[0],auxPill[1],auxPill[2]);

	return 0;


}