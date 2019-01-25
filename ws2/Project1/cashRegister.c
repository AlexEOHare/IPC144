/*
Student: Alex O'Hare
*/

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:
#include <stdio.h>

int main(void)
{
	int cents, output;
	double amount;
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	double GST = amount * .13 + 0.005;
	printf("GST: %.2lf\n", GST);

	amount = amount + GST;
	printf("Balance owing: $%.2f\n", amount);

	

	cents = amount * 100 + 0.5;

	output = cents / 100;
	cents = cents % 100;
	printf("Loonies required: %d, balance owing $%.2f\n", output, cents / 100.0);

	output = cents / 25;
	cents = cents % 25;
	printf("Quarters required: %d, balance owing $%.2f\n", output, cents / 100.0);

	output = cents / 10;
	cents = cents % 10;
	printf("Dimes required: %d, balance owing $%.2f\n", output, cents / 100.0);

	output = cents / 5;
	cents = cents % 5;
	printf("Nickles required: %d, balance owing $%.2f\n", output, cents / 100.0);

	output = cents / 1;
	cents = cents % 1;
	printf("Pennies required: %d, balance owing $%.2f\n", output, cents / 100.0);

	return 0;
}