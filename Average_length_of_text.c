//To find out Average length of several lines of text 
#include<stdio.h>
int linecount(void);
main(){
	int n, count=0, sum=0;
	float avg;
	printf("Enter the text below\n");
	while((n=linecount())>0){
		sum += n;
		++count;
	}
	avg=sum/count;
	printf("\nAverage number of characters per line: %5.2f",avg);
}
int linecount(void){
	char line[80];
	int count=0;
	while((line[count]=getchar())!='\n')
	++count;
	return (count);
	
}
