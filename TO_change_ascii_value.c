// To change ascii value 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char a[20];
	int i,b,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
	b=toascii(a[i]);
	printf("%d\n",b);
	}
	
}
