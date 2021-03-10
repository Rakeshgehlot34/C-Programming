//largest positive intiger
#include<stdio.h>
main() {
	int a,max=-1;
	while((scanf("%d",&a))==1){
		if(a<0)
		continue;
		if(max<a)
		max=a;
	}
	printf("Maximum positive intiger= %2d",max);
}
