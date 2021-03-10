//find out the GCD
#include<stdio.h>
int main() {
	int a,b,c;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	if(a<b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	printf("The GCD of a & b is = %d",a);
}
