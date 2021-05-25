//Insertion Sort
#include<stdio.h>
int main(){
	int arr[50],i,j,n,t;
	printf("Enter the length of Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	}
	}
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	return 0;
}
