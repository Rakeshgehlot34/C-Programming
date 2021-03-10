// To find out the factorial upto 20
#include<stdio.h>
int main(){
	long long int i, n, factorial=1;
	printf("Enter the value which you want to find Factorial : ");
	scanf("%ld",&n);
	if(n>=1)
	for(i=1;i<=n;i++){
		factorial *=i;
	}
	printf("Factorial of %ld no is = %lld", n, factorial);
	return factorial; //return (factorial) is shows the factorial value
}
