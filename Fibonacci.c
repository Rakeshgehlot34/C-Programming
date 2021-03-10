// To calculate successive fibonacci number
#include<stdio.h>
long int fibonacci(int count);
int main() {
	int count;
	auto n;
	printf("How many fibonacci numbers?=");
	scanf("%d",&n);
	printf("\n");
	for(count=1;count<=n;++count)
	printf("\n i=%2d\tF=%ld",count ,fibonacci(count));
	getch();
}
long int fibonacci(int count) {
	static long int f1=1, f2=1, f; //use of static variables
	f=(count<3)?1:f1+f2;
	f2=f1;
	f1=f;
	return (f);
}
