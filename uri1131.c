#include<stdio.h>
#include<stdlib.h>
struct grenal{
	int num;
	char winner;
	int gremio;
	int inter; 
};

void readGrenal(struct grenal * nome,int num,int inter,int gremio){
	(*nome).num = num;
	(*nome).gremio = gremio;
	(*nome).inter = inter;
	(*nome).winner = ((gremio>inter ? -1 : (gremio == inter ? 0 : 1)));
	return;
}

int main(){
	int x,y,num=0,new=1;
	int gremio=0,inter=0;
	struct grenal * jogo;
	jogo = malloc(13);
	while(new==1){
		num++;
		jogo = realloc(jogo,(sizeof *jogo)*num);		
		scanf("%d %d",&x,&y);
		readGrenal(&jogo[num-1],num,x,y);
		if(jogo[num-1].winner==1)
			inter++;
		else if(jogo[num-1].winner==-1)
			gremio++;

		do{
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d",&new);	
		}while(new<1||new>2);
	}
	printf("%d grenais\n",num);		
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gremio);
	printf("Empates:%d\n",(num-inter-gremio));
	printf((inter>gremio?"Inter venceu mais\n" :(inter==gremio?"Não houve vencedor\n":"Gremio venceu mais\n")));
	free(jogo);
	jogo = NULL;
	return 0;



}