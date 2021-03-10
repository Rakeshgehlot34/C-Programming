//Lowercase to Uppercase conversion
/*#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter any string:");
	ch=getchar();
	printf("The Uppercase of giver string is:");
	putchar(toupper(ch));
}*/

#include<stdio.h>
#include<ctype.h>
#define EOL '\n'
int main()
{
	char letter[80];
	int tag, count=0;
	//read in the lowercase text
	while((letter[count]=getchar()) !=EOL)
	++count;
	tag=count;
	
	//display the uppercase text 
	count=0;
	while(count<tag){
		putchar(toupper(letter[count]));
		++count;
	}
}
