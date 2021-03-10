// Until a -1 is read
#include<stdio.h>
int main() {
	int a,s=0;
	printf("Enter the number : ");
	scanf("%d",&a);
	while (a!=-1) {
		s=s+a;
		printf("sum = %d\t\tNew value of a = ",s);
		scanf("%d",&a);
	}
	getch();
	return 0;
}
