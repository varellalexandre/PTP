#include<stdio.h>
int main(){
	float n1,n2,n3,n4,media,ex;
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	media = (2*n1+3*n2+4*n3+n4)/10;
	printf("Media: %.1f\n",media);
	if(media>=7 && media<=10)
		printf("Aluno aprovado.\n");
	else if(media>=5){
		printf("Aluno em exame.\n");
		scanf("%f",&ex);
		printf("Nota do exame: %.1f\n",ex);
		media =(media+ex)/2;
		(media>=5 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n"));		
		printf("Media final: %.1f\n",media);
	}
	else if (media<5)
		printf("Aluno reprovado.\n");

	return 0;
}