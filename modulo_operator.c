//check divisivle by 6 and 4
#include<stdio.h>
int main() {
	int a, b;
	printf("Enter the no. : ");
	scanf("%d",&a);
	if(((a%6)==0)&&((a%4)==0))
	printf("The no. is divisible by 6 and 4");
	else 
	if((a%6)==0)
	printf("The no. is divisible by 6");
	else if((a%4)==0)
	printf("The no. is divisible by 4");
	else
	printf("The no. is not divisable by 6 and 4 or both");
}
