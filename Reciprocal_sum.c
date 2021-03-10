#include<stdio.h>
main(){
	int i,n;
	float sum=0.0;
	printf("Enter the limit of the sum of reciprocal no. = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+(1.0/i);
	}
	printf("reciprocal sum of 1 to %d is = %f",n,sum);
}
