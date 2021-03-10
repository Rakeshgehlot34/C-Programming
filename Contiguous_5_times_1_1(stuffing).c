//Contiguous one in five times (stuffing)
#include<stdio.h>
#include<string.h>
int main(){
	char a[80];
	int c,n;
	int count,i,j,b;
	printf("Enter the bits : ");
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++){
		if(a[i]=='1'){
			count++;
			if(count==5){
				b=b+1;
				for(j=b-1;j>i;j--){
					a[j]=a[j-1];
				}
		a[i+1]='0';	
			}
		}
		else
		count=0;
	}
		for(i=0;i<b;i++)
	printf("%c ",a[i]);
}
