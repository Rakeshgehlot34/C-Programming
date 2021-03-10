//Text note
#include<stdio.h>
#include<conio.h>
main(){
	int maxchar,i;
	char current='\n',previous;
	scanf("%d",&maxchar);
	getchar();
	for(i=0;i<maxchar;i++){
		previous=current;
		current=getchar();
		if((current=='\n') && (previous=='\n'))
		break;
	}
	printf("%d\n",i);
	getch();
}
