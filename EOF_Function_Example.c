//Sample Text
#include<stdio.h>
#include<conio.h>
int main(){
	int ch;
	int count=-1;
	while(ch!=EOF && ch!='\n'){
		ch=getchar();
		putchar(ch);
		count=count+1;
	}
	printf("\n%d",count);
getch();
}
