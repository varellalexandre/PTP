#include<stdio.h>
int main(){
	int val;
	int cem=0,cinq=0,vint=0,dez=0,cinc=0,dois = 0,um = 0;

	scanf("%d",&val);
	printf("%d\n",val);
	if(val>=100){
		cem = val/100;
		val = val-(cem*100);
	}
	if(val>=50){
		cinq = val/50;
		val = val-(cinq*50);
	}
	if(val>=20){
		vint = val/20;
		val = val-(vint*20);
	}
	if(val>=10){
		dez = val/10;
		val = val-(dez*10);
	}
	if(val>=5){
		cinc = val/5;
		val = val-(cinc*5);
	}
	if(val>=2){
		dois = val/2;
		val = val-(dois*2);
	}
	if(val>=1){
		um = val;
		val = val-(um);
	}
	
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cinq);
	printf("%d nota(s) de R$ 20,00\n",vint);
	printf("%d nota(s) de R$ 10,00\n",dez);
	printf("%d nota(s) de R$ 5,00\n",cinc);
	printf("%d nota(s) de R$ 2,00\n",dois);
	printf("%d nota(s) de R$ 1,00\n",um);

	return 0;
}