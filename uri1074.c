#include<stdio.h>
int main(){
	int n,i=0,arr[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		if(arr[i]%2 == 0){
			if(arr[i] > 0)
				printf("EVEN POSITIVE\n");
			else if(arr[i] < 0)
				printf("EVEN NEGATIVE\n");
			else if(arr[i] == 0)
				printf("NULL\n");

		}else if(arr[i]%2 == 1)
			printf("ODD POSITIVE\n");
		else if(arr[i]%2 == -1)
			printf("ODD NEGATIVE\n");
	}
		

	

	return 0;
	}
}