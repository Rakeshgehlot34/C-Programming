//average of no
#include<stdio.h>
int main()
{
	int n;
	float sum=0, x, avg;
	int count, tag;
	printf("How many no you want to find avg = ");
	scanf("%d",&n);
	for(count=1;count<=n;count++){
		printf("Enter the %d no = ", count);
		scanf("%f",&x);
		sum +=x;
		tag=count;
	}
	avg=sum/tag;
	printf("average of these no = %f",avg);
	return 0;
}
