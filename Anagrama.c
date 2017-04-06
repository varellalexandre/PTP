#include<stdio.h>
#include<string.h>

char isvogal(char v);
void up2low(char * str);
void anagrama(char * str,int k);
char verify(char * str);
void troca(char * str,int p1,int p2);

int main(){
	char arr[] = "rmesoopaaocossruiasnmtererootscort";
	anagrama(arr,0);

	return 0;
}	

char isvogal(char v){
	if(v=='a' || v=='e' || v=='i' || v=='o' || v=='u')
		return 1;

	return 0;

}

void up2low(char * str){
	int i = 0;
	while(str[i]!='\0'){
		if(str[i]>='A' && str[i]<='Z')
			str[i]+=32;
		i++;
	}

	return;
}

void anagrama(char * str,int k){
	up2low(str);
	
	int size = strlen(str);
	int i = 0;
	if(k == size && verify(str))
		printf("%s\n",str);
	else
		for(i=k;i<size;i++){
			
			troca(str,k,i);
			anagrama(str,k+1);
			troca(str,i,k);	
		}
			
		
	return;

}

char verify(char * str){
	int i = 0;
	for(;i<strlen(str)-2;i++){
		if(isvogal(str[i]) && isvogal(str[i+1]) && isvogal(str[i+2]))
			return 0;
		else if(!isvogal(str[i]) && !isvogal(str[i+1]) && !isvogal(str[i+2]))
			return 0;
	}
	return 1;
}

void troca(char * str,int p1,int p2){
	char tmp;
	tmp = str[p1];
	str[p1] = str[p2];
	str[p2] = tmp;

}
