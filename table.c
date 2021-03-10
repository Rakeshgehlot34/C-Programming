#include<stdio.h>
int main() {
	int i,n,r;
	printf("Enter the no which you want find table = ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		r=n*i;
		printf("%d*%d=%d\n",n,i,r);
	}
}
