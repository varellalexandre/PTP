#include<stdio.h>
int main(){
	int i,n,max=-1,pos;
	for(i = 0;i<5;i++){
		scanf("%d",&n);
		if(max<n){
			max = n;
			pos = i;
		}


	}
	printf("%d\n%d",max,pos+1);
	return 0;

}