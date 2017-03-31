#include<stdio.h>
int main(){
	int n,i,esp = 0,aux;
	scanf("%d",&aux);
	int tubarao[14]={0};
	char nomes[][80] = {{"Tubarao Branco"},{"Tubarao Martelo"},{"Tubarao Touro"},
	{"Tubarao Baleia"},{"Tubarao Lixa"},{"Tubarao Frade"},
	{"Tubarao Tigre"},{"Tubarao Cabeca-Chata"},{"Tubarao Serra"},
	{"Tubarao de Pontas Negras"},{"Tubarao Raposa"},{"Tubarao Mako"},
	{"Tubarao Bruxa"},{"Tubarao Azul"}};

	for(i=0;i<aux;i++){
		scanf("%d",&n);
		if(tubarao[n-1] == 0)
			esp++;

		tubarao[n-1]++;
	}

	printf("%d especies diferentes\n",esp);
	
	for(i=0;i<14;i++){
		if(tubarao[i] != 0)
			printf("%s\n",nomes[i]);

	}

	return 0;
}
