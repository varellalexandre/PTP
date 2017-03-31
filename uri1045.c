#include<stdio.h>
#include<math.h>
void order(double pill[3]){
	int i,j;
	double aux;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(pill[j]<pill[i]){
				aux = pill[i];
				pill[i] = pill[j];
				pill[j] = aux;	

			}
		}

	}

}

int main(){
	double a[3];
	scanf("%lf %lf %lf",&a[0],&a[1],&a[2]);
	order(a);
	if(a[0]>=(a[1]+a[2]))
		printf("NAO FORMA TRIANGULO\n");
	else if(pow(a[0],2)==(pow(a[1],2)+pow(a[2],2)))
		printf("TRIANGULO RETANGULO\n");
	else if(pow(a[0],2)>(pow(a[1],2)+pow(a[2],2)))
		printf("TRIANGULO OBTUSANGULO\n");
	else if(pow(a[0],2)<(pow(a[1],2)+pow(a[2],2)))
		printf("TRIANGULO ACUTANGULO\n");
	
	if(a[0] == a[2])
		printf("TRIANGULO EQUILATERO\n");
	else if(a[0] == a[1]||a[1] == a[2])
		printf("TRIANGULO ISOSCELES\n");

	return 0;
}