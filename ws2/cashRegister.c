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

	int cents = owing * 100;
	int quarters = cents/25;
	owing = ((owing * 100) - (quarters * 25))/100;


	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, owing);

	cents = owing * 100;
	int dimes = cents / 10;
	owing = ((owing * 100) - (dimes * 10)) / 100;
	printf("Dimes required: %d, balance owing $%.2lf\n", dimes, owing);

	cents = owing * 100;
	int nickles = cents / 5;
	owing = ((owing * 100) - (nickles * 5)) / 100;
	printf("Nickles required: %d, balance owing $%.2lf\n", nickles, owing);
	
	int pennies = ((owing) * 100);
	owing = ((owing * 100) - pennies) / 100;
	printf("Pennies required: %d, balance owing $%.2lf\n", pennies, owing);



	return 0;
}