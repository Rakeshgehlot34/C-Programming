#include<stdio.h>
#include<stdlib.h>
struct _retire_info
{
	int months;
	double contribution;
	double rate_of_return;
};
typedef struct _retire_info retire_info;

double account_balance(int year, int months, double balance, retire_info r){
	printf("Age %3d month %2d you have $%.2lf\n",year, months, balance);
	return (balance*r.rate_of_return);
}

void retirement(int startAge, double initial, retire_info working, retire_info retired){
	int i,j,year,months;
	double balance;
	//calculate balance before working
	year=startAge/12;
	months=startAge%12;
	balance=account_balance(year, months, initial, working);
	//Calculate balance while working
	for(i=startAge+1;i<=startAge+working.months;i++){
		year=i/12;
		months=i%12;
	initial=initial+balance+working.contribution;
	balance=account_balance(year, months, initial, working);
	}
	balance=initial*retired.rate_of_return;
	//calculate balance while retired
	for(j=i;j<i+retired.months-1;j++){
		year=j/12;
		months=j%12;
	initial=initial+balance+retired.contribution;
	balance=account_balance(year, months, initial, retired);
	}
		
}

int main(void){
	retire_info working;
	retire_info retired;
	
	working.months=489;
	working.contribution=1000;
	working.rate_of_return=(0.045/12);
	
	retired.months=384;
	retired.contribution=-4000;
	retired.rate_of_return=(0.01/12);
	
	int Age=327;
	double saving=21345;
	retirement(327, 21345, working, retired);
}
