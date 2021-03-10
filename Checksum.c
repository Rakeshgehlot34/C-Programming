//Chechsum
#include<stdio.h>
#include<string.h>
main() {
	char a[80];
	auto int b,c[9],d[80][9],e;
	int i=0,j=0,k=0,x;
	int carry=0,sum[1][9]={0,0,0,0,0,0,0,0,0},p;
	printf("Enter the String :\t");
	gets(a);
	b=strlen(a);
	for( i=0;i<=b-1;i++) {
		e=a[i];
		printf("\nASCII value of %c is =\t%d \t",a[i],e);
		for(j=0;j<9;j++) {
			c[j]=e%2;
			e=e/2;
		}
		for(k=0;k<9;k++) {
			d[i][k]=c[8-k];
			printf("%d ",d[i][k]);
		}
			printf("\n");
	}
	printf("sum = \t\t");
	for(i=0;i<9;i++)
	printf("%d ",sum[0][1]);
	printf("\n");
	for(i=0;i<b;i++){
		for(k=8;k>=0;k--){
			x=d[i][k]+sum[0][k]+carry;
			p=x%2;
			carry=x/2;
			sum[0][k]=p;
		}
	printf("sum = sum + %c \t",a[i]);
	if(sum[0][0]==1){
		sum[0][8]=sum[0][8]+sum[0][0];
		sum[0][0]=0;
		carry=0;
		for(k=8;k>=0;k--){
			sum[0][k]=sum[0][k]+carry;
			p=sum[0][k]%2;
			carry=sum[0][k]/2;
			sum[0][k]=p;
		}
	}
	for(k=0;k<9;k++)
		printf("%d ",sum[0][k]);
		printf("\n");	
	}
	printf("Checksum = \t");
	for(k=0;k<9;k++)
		printf("%d ",sum[0][k]);
	printf("\nChecksum in 8 bit = \t");
	for(k=1;k<9;k++)
		printf("%d ",sum[0][k]);
	printf("\n1's complement is = \t");
	for(k=1;k<9;k++){
		if(sum[0][k]==1)
		sum[0][k]=0;
		else
		sum[0][k]=1;
	}
	for(k=1;k<9;k++)
		printf("%d ",sum[0][k]);	
}
