/*
Student: Alex O'Hare
*/

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:
#include <stdio.h>

int main(void)
{
	double amount;
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	double GST = amount * .13 +0.005;
	printf("GST: %.2lf\n", GST);
	
	amount = amount + GST;
	int dollars = amount;
	double owing = amount - dollars;
	printf("Balance owing: $%.2lf\n", amount);

	printf("Loonies required: %d, balance owing $%.2lf\n", dollars, owing);

	int cents = amount * 100;
	printf("%d", cents);


	return 0;
}