// To find nCk
#include<stdio.h>
int fact(int r ){
	int i,s=1;
	for(i=1;i<r+1;i++){
		s=s*i;
	}
	return s;
}
int main(){
	int n,k,result;
	printf("Enter the n&k = ");
	scanf("%d%d",&n,&k);
	result=(fact(n)/(fact(k)*fact(n-k)));
	printf("nck is = %d",result);
}
