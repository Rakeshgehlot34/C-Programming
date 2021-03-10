//Difference between preincrement and postincrement
#include<stdio.h>
int main(){
	int i,j,k;
	i=0;
	k=0;
	printf("Postincrement:\n");
	for(k=0;k<5;k++){
		j=i++;
	printf("%d\n",j);
	}
	printf("\n");
	i=0;
	printf("Preincrement:\n");
	for(k=0;k<5;++k){
		j=++i;
		printf("%d\n",j);
	}
	
}
