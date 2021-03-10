// Year is leap or not leap
#include<stdio.h>
int main(){
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	if((((year%400)==0)||((year%100)!=0))&&((year%4)==0))
	printf("Year %d is a leap Year",year);
	else
	printf("year %d is not a leap year",year);
}
