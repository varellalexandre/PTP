#include<stdio.h>
int main(){
	double salary,bonus;
	scanf("%lf",&salary);
	if(salary<=400)
		bonus = salary*0.15;
	else if(salary<=800)
		bonus = salary*0.12;
	else if(salary<=1200)
		bonus = salary*0.1;
	else if(salary<=2000)
		bonus = salary*0.07;
	else if(salary>2000)
		bonus = salary*0.04;

	printf("Novo salario: %.2lf\n",salary+bonus);
	printf("Reajuste ganho: %.2lf\n",bonus);
	printf("Em percentual: %.0lf %% \n",(bonus/salary)*100);
	return 0;

}