// Name:Alex O'Hare
// Student Number:
// Email:aohare1@myseneca.ca
// Section:ICP144
// Workshop:ws3_home

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include <stdio.h>


int main (void) {
	int numDays;
	int cnt;
	int high[10];
	int low[10];
	double sum = 0.0;
	int highest;
	int lowest;
	int highLoc;
	int lowLoc;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &numDays);
	printf("\n");
	while (numDays < 3 || numDays > 10) {

		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &numDays);
		printf("\n");
	}
	for (cnt = 0; cnt < numDays; cnt++) {
		printf("Day %d - High: ", cnt + 1);
		scanf("%d", &high[cnt]);
		printf("Day %d - Low: ", cnt + 1);
		scanf("%d", &low[cnt]);
		while (low[cnt] < -40 || high[cnt] > 40 || high[cnt] < low[cnt]) {
			printf("Incorrect values, temperature must be in the range -40 to 40, high must be greater than low.\n");
			printf("Day %d - High: ", cnt + 1);
			scanf("%d", &high[cnt]);
			printf("Day %d - Low: ", cnt + 1);
			scanf("%d", &low[cnt]);

		}

	}
	printf("\nDay  Hi  Low\n");

	for (cnt = 0; cnt < numDays; cnt++) {
		printf("%d   %2d    %2d\n", cnt + 1,high[cnt], low[cnt] );
	}
	highest = high[0];
	for (cnt = 0; cnt < 4; cnt++) {
		if (high[cnt] > highest) {
			highest = high[cnt];
			highLoc = cnt + 1;
		}

	}
	lowest = low[0];
	for (cnt = 0; cnt < 4; cnt++) {
		if (low[cnt] < lowest) {
			lowest = low[cnt];
			lowLoc = cnt + 1;
		}
	}

		printf("\nThe highest temperature was %d, on day %d\n", highest, highLoc);
		printf("The lowest temperature was %d, on day %d\n", lowest, lowLoc);

	printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative numbner to exit: ");
	scanf("%d", &numDays);
	
	for (; numDays >= 0;) {
		sum = 0;
		while (numDays == 0 || numDays > 4) {
			printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d", &numDays);
		}
		for (cnt = 0; cnt < numDays; cnt++) {
			sum += high[cnt];
			sum += low[cnt];
		}
		printf("\nThe avergae temperature up to day %d is %.2lf\n", numDays, (sum / (numDays * 2)));

		printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &numDays);
		
	}
		
		printf("\nGoodbye!");
	return 0;
}