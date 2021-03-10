#include<stdio.h>
int main(){
	int i,x;
	char a[x];
	gets(a);
	i=0;
	while(1){
		if(a[i]!='\n'){
		printf("%c",a[i]);
		i=i+1;
		}
		else
		break;
	}
	
}
