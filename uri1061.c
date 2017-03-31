#include<stdio.h>
#include<math.h>
int main(){
	unsigned long int auxi,auxf;
	int w = 0,x = 0,y = 0,z = 0;
	int di,hi,mi,si,df,hf,mf,sf;
	char arg [4][5][100];
	scanf("%s %d",arg[0][0],&di);

	scanf("%d %s %d %s %d",&hi,arg[1][1],&mi,arg[1][3],&si);

	scanf("%s %d",arg[2][0],&df);

	scanf("%d %s %d %s %d",&hf,arg[3][1],&mf,arg[3][3],&sf);
	

	auxi = di*24*3600 + hi*3600 + mi*60 + si;
	auxf = df*24*3600 + hf*3600 + mf*60 + sf;

	w = (auxf-auxi);
	x = w%(3600*24);
	y = x%3600;
	z = y%60;

	printf("%d dia(s)\n",w/(24*3600));
	printf("%d hora(s)\n",x/(3600));
	printf("%d minuto(s)\n",y/60);
	printf("%d segundo(s)\n",z);

	return 0;

}	