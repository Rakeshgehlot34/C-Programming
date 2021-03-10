//Max no. out of three no's
#include<stdio.h>
main() {
	int a,b,c,d;
	printf("Enter the no. = ");
	scanf("%d %d %d",&a,&b,&c);
	d=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf(" max= %d",d);
}
