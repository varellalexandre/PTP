#include<stdio.h>
int main(){
	int sh,sm,fh,fm;
	scanf("%d %d %d %d",&sh,&sm,&fh,&fm);
	if(fm<=sm){
		fm+=60;	
		fh--;
	}
	if(fh<=sh)
		fh+=24;
	if((fm-sm) == 60){
		fh++;
		fm=sm;
	}
	if((fh-sh==24) && (fm-sm)!=0)
		fh=sh;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(fh-sh),(fm-sm));
	return 0;


}