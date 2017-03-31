#include<stdio.h>
int main(){
	float x,y,z,a,b,c,d,e;
	scanf("%f %f %f",&x,&y,&z);

	a = (x*z)/2;
	b = 3.14159*z*z;
	c = ((x+y)*z)/2;
	d = y*y;
	e = x*y;

	printf("TRIANGULO: %.3f\n",a);
	printf("CIRCULO: %.3f\n",b);
	printf("TRAPEZIO: %.3f\n",c);
	printf("QUADRADO: %.3f\n",d);
	printf("RETANGULO: %.3f\n",e);


	return 0;
}