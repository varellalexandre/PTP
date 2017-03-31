#include<stdio.h>
int main(){
	double val;
	int c50=0,c25=0,c10=0,c5=0,c1=0,cem=0,cinq=0,vint=0,dez=0,cinc=0,dois = 0,um = 0;
	scanf("%lf",&val);

	if(val>=100){
		cem = (int)val/100;
		val = val-(cem*100);
	}
	if(val>=50){
		cinq = (int)val/50;
		val = val-(cinq*50);
	}
	if(val>=20){
		vint = (int)val/20;
		val = val-(vint*20);
	}
	if(val>=10){
		dez = (int)val/10;
		val = val-(dez*10);
	}
	if(val>=5){
		cinc = (int)val/5;
		val = val-(cinc*5);
	}
	if(val>=2){
		dois = (int)val/2;
		val = val-(dois*2);
	}
	if(val>=1){
		um = (int)val;
		val = val-(um);
	}
	val*=100;
	if(val>=50){
		c50 = val/50;
		val = val-(c50*50);
	}
	if(val>=25){
		c25 = val/25;
		val = val-(c25*25);
	}
	if(val>=10){
		c10 = val/10;
		val = val-(c10*10);
	}
	if(val>=5){
		c5 = val/5;
		val=val-(c5*5);
	}
	if(val>=1){
		c1 = val/1;
		val = val-(c1*1);
	}

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",cem);
	printf("%d nota(s) de R$ 50.00\n",cinq);
	printf("%d nota(s) de R$ 20.00\n",vint);
	printf("%d nota(s) de R$ 10.00\n",dez);
	printf("%d nota(s) de R$ 5.00\n",cinc);
	printf("%d nota(s) de R$ 2.00\n",dois);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",um);
	printf("%d moeda(s) de R$ 0.50\n",c50);
	printf("%d moeda(s) de R$ 0.25\n",c25);
	printf("%d moeda(s) de R$ 0.10\n",c10);
	printf("%d moeda(s) de R$ 0.05\n",c5);
	printf("%d moeda(s) de R$ 0.01\n",c1);
	return 0;
}
