//Contiguous one in five times (stuffing)
#include<stdio.h>
#include<string.h>
int main(){
	int a[80],c,n;
	int count,i,j,b;
	printf("Enter the length of the bits : ");
	scanf("%d",&b);
	printf("Enter the bits : \n");
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(i=0;i<b;i++){
		if(a[i]==1){
			count++;
			if(count==5){
				b=b+1;
				for(j=b-1;j>i;j--){
					a[j]=a[j-1];
				}
		a[i+1]=0;	
			}
		}
		else
		count=0;
	}
		for(i=0;i<b;i++)
	printf("%d ",a[i]);
}
