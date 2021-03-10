//Pythagorean Triples
#include<stdio.h>
int main() {
	int i=0,n,ppre,pre,curr,count=0,a[n];
	printf("How many no's you enter : ");
	scanf("%d",&n);
	printf("\nEnter the no. : \n");
	for(i=0;i<n;i++){
		printf("%d. ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Pythagorane Troples is : \n");
	for(i=0;i<n;i++) {
		curr=a[i];
		if(curr>0){
			if(count==0){
			ppre=curr;
			count=1;
			continue;
		}
		else{
			if(count==1) {
				pre=curr;
				count++;
				continue;
			}
			else{
				if(ppre*ppre+pre*pre==curr*curr){
					printf("%d %d %d\n",ppre,pre,curr);
					ppre=pre;
					pre=curr;
				}
				else{
					ppre=pre;
					pre=curr;
				}
			}
		}
		}
		
	}
}
