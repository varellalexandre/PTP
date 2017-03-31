/*
Aluno : Alexandre Guilherme Rodrigues Varella
Matricula : 20170065631
Tarefa do futebol
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct t{
	char nome[100];
	int pg,gm,gs,s,v,ga;
};//define caracteristicas do time

typedef struct t time;

void computaJogo(time * times,int tam,char timeA[100],char timeB[100],int golA,int golB);//funçao para salvar o valor do jogo
void leResultado(time * times,int tam);//le os resultados
void iguala(time * a,time * b);//func de copia
void ordena(time * times,int tam);//ordenador por pontos ganhos seguido de saldo
void tabela(time * times,int tam);//imprime a tabela
time * populaTabela(int tam);//recebe os times da tabela
void save(time * times,int tam);//salva no arquivo
time * load(int * size);//loada o arquivo

int main(){
	int game=1,size=0;
	time * times;
	times = load(&size);
	if(!size){
		printf("Digite a quantidade de times\n");
		scanf("%d",&size);
		times = populaTabela(size);
	}
	tabela(times,size);

	while(game != 2){
		printf("Digite uma opção de menu (1-DIGITAR JOGO 2-SAIR 3-SALVAR 4-LIMPAR TABELA)\n");
		scanf("%d",&game);
		switch(game){
			case 1:
				leResultado(times,size);
				system("clear");
				tabela(times,size);
				break;
			case 2:
				break;
			case 3:
				save(times,size);
				system("clear");
				tabela(times,size);
				break;
			case 4:
				printf("Digite a quantidade de times\n");
				scanf("%d",&size);
				free(times);
				times = NULL;
				times = populaTabela(size);
				system("clear");
				tabela(times,size);
				save(times,size);
				break;
		}

		
	}

	free(times);
	times = NULL;
}

void save(time * times,int tam){
	FILE * arq;
	arq = fopen("tabela.txt","w");
	int i;
	fprintf(arq,"%d ",tam);
	for(i=0;i<tam;i++)
		fprintf(arq,"%s %d %d %d %d %d %d ",times[i].nome,times[i].pg,times[i].gm,times[i].gs,times[i].s,times[i].v,times[i].ga);

	fclose(arq);

	return;
}

time * load(int * tam){
	FILE *arq;
	int i = 0;
	time * times;
	if(fopen("tabela.txt","r")){
		arq = fopen("tabela.txt","r");
		fscanf(arq,"%d",tam);
		times = (time *) malloc((*tam)*sizeof(time));
		while(fscanf(arq,"%s %d %d %d %d %d %d",times[i].nome,&times[i].pg,&times[i].gm,&times[i].gs,&times[i].s,&times[i].v,&times[i].ga)!=EOF){
			i++;

		}
		fclose(arq);
		return times;
	}
	
	return NULL;
}

time * populaTabela(int tam){
	int i;
	time * times;
	times = (time *) malloc(tam*sizeof(time));
	for(i=0;i<tam;i++){
		printf("Digite o time %d\n",i+1);
		scanf("%s",times[i].nome);
		times[i].pg = 0;
		times[i].gm = 0;
		times[i].gs = 0;
		times[i].s = 0;
		times[i].v = 0;
		times[i].ga = 0;
	}
	return times;
}

void tabela(time * times,int tam){
	int i;
	printf("TIME| pg | gm | gs |  s |  v | ga |\n");
	for(i=0;i<tam;i++)
		printf("%s | %d | %d | %d | %d | %d | %d |\n",times[i].nome,times[i].pg,times[i].gm,times[i].gs,times[i].s,times[i].v,times[i].ga);
}

void computaJogo(time * times,int tam,char timeA[100],char timeB[100],int golA,int golB){
	int i;
	if(golA>golB){
		for(i=0;i<tam;i++){
			if(!(strcmp(times[i].nome,timeA))){
				times[i].pg+=3;
				times[i].gm+=golA;
				times[i].gs+=golB;
				times[i].s = times[i].gm-times[i].gs;
				times[i].v++;
				if(times[i].gs == 0)
					times[i].ga=times[i].gm/1;
				else
					times[i].ga=times[i].gm/times[i].gs;

			}
			if(!(strcmp(times[i].nome,timeB))){
				times[i].gm+=golB;
				times[i].gs+=golA;
				times[i].s = times[i].gm-times[i].gs;
				times[i].ga=times[i].gm/times[i].gs;

			}

		}

	}else if(golA<golB){
		for(i=0;i<tam;i++){
			if(!(strcmp(times[i].nome,timeB))){
				times[i].pg+=3;
				times[i].gm+=golB;
				times[i].gs+=golA;
				times[i].s = times[i].gm-times[i].gs;
				times[i].v++;
				if(times[i].gs == 0)
					times[i].ga=times[i].gm/1;
				else
					times[i].ga=times[i].gm/times[i].gs;

			}
			if(!(strcmp(times[i].nome,timeA))){
				times[i].gm+=golA;
				times[i].gs+=golB;
				times[i].s = times[i].gm-times[i].gs;
				times[i].ga=times[i].gm/times[i].gs;

			}

		}


	}else{
		for(i=0;i<tam;i++){
			if(!(strcmp(times[i].nome,timeA))){
				times[i].pg+=1;
				times[i].gm+=golA;
				times[i].gs+=golB;
				times[i].s = times[i].gm-times[i].gs;
				if(times[i].gs == 0)
					times[i].ga=times[i].gm/1;
				else
					times[i].ga=times[i].gm/times[i].gs;

			}
			if(!(strcmp(times[i].nome,timeB))){
				times[i].pg+=1;
				times[i].gm+=golA;
				times[i].gs+=golB;
				times[i].s = times[i].gm-times[i].gs;
				if(times[i].gs == 0)
					times[i].ga=times[i].gm/1;
				else
					times[i].ga=times[i].gm/times[i].gs;

			}

		}
	}
	ordena(times,tam);
}

void leResultado(time * times,int tam){
	char timeA[100],timeB[100];
	int golA,golB;

	printf("-----------------Digite o Valor do jogo---------------\n");
	scanf("%s %s %d %d",timeA,timeB,&golA,&golB);
	printf("\n\n");
	computaJogo(times,tam,timeA,timeB,golA,golB);
}

void iguala(time * a,time * b){
	strcpy((*a).nome,(*b).nome);
	(*a).pg = (*b).pg;
	(*a).gm = (*b).gm;
	(*a).gs = (*b).gs;
	(*a).s = (*b).s;
	(*a).v = (*b).v;
	(*a).ga = (*b).ga;
}

void ordena(time * times,int tam){
	int i,j;
	time aux;
	for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
			if(times[i].pg>times[j].pg){
				iguala(&aux,&times[i]);
				iguala(&times[i],&times[j]);
				iguala(&times[j],&aux);
			}

	for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
			if(times[i].pg == times[j].pg && times[i].s > times[j].s){
				iguala(&aux,&times[i]);
				iguala(&times[i],&times[j]);
				iguala(&times[j],&aux);

				}

	for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
			if(times[i].pg == times[j].pg && times[i].s == times[j].s && times[i].v > times[j].v){
				iguala(&aux,&times[i]);
				iguala(&times[i],&times[j]);
				iguala(&times[j],&aux);

				}
}
