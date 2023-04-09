#include <stdio.h>

double divideNumber();
int main() 
{
	// Program to show how many dozens of egges they producs daily
	int eggs;
	printf("Enter no of eggs sold today: ");

	scanf("%i", &eggs);

	double result = divideNumber(eggs, 12);
	printf("No of egges is: %f", result);
	return 0;
}

double divideNumber(int number, int divisor) 
{
	return (double) number / divisor;
}