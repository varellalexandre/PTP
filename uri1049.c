#include<stdio.h>
char stringCompare(char * a,char * b){
	char pontA,pontB;
	int i = 1;
	pontA = *a;
	pontB = *b;
	while(pontA !='\0'){
		if(pontA == pontB){
			pontA = *(a+i);
			pontB = *(b+i);
			i++;
			
		}
		else
			return 0;

	
	}
	return 1;

}
int main(){
	char r1[100],r2[100],r3[100];
	scanf("%s %s %s",r1,r2,r3);

	if(stringCompare(r1,"vertebrado")){
		if(stringCompare(r2,"ave")){
			if(stringCompare(r3,"carnivoro"))
				printf("aguia\n");
			else if(stringCompare(r3,"onivoro"))
				printf("pomba\n");
			

		}else if(stringCompare(r2,"mamifero")){
			if(stringCompare(r3,"onivoro"))
				printf("homem\n");
			else if(stringCompare(r3,"herbivoro"))
				printf("vaca\n");
						

		}

	}else if(stringCompare(r1,"invertebrado")){
		if(stringCompare(r2,"inseto")){
			if(stringCompare(r3,"hematofago"))
				printf("pulga\n");	
			else if(stringCompare(r3,"herbivoro")){
				printf("lagarta\n");
			

		}else if(stringCompare(r2,"anelideo")){
			if(stringCompare(r3,"hematofago"))
				printf("sanguessuga\n");
			else if(stringCompare(r3,"onivoro"))
				printf("minhoca\n");
						

			}

		}
	}

	return 0;
}