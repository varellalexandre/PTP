#include<stdio.h>
int main(){
	int n,yr,month,day;

	scanf("%d",&n);
	yr = n/365;
	n = n - yr*365;
	month = n/30;
	n = n- month*30;
	day = n;
	printf("%d ano(s)\n",yr);
	printf("%d mes(es)\n",month);
	printf("%d dia(s)\n",day);


	return 0;
}
