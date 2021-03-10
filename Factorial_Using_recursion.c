#include<stdio.h>
int fact(int n){
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main() {
	int n;
	int p;
	printf("Enter the no.=");
	scanf("%d",&n);
	p=fact(n);
	printf("\nFactorial of %d is = %d",n,p);
}
