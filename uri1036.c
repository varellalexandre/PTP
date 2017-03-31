#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2,dis;
	scanf("%f %f %f",&a,&b,&c);
	dis = pow(b,2)-(4*a*c);
	if(dis<0||a==0)
		printf("Impossivel calcular\n");
	else{
		x1 = (-b+sqrt(dis))/(2*a);
		x2 = (-b-sqrt(dis))/(2*a);
		printf("R1 = %.5f\n",x1);
		printf("R2 = %.5f\n",x2);
	}

	return 0;


}