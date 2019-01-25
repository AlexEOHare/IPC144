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

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &numDays);

	while (numDays < 3 || numDays > 10) {

		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &numDays);
		printf("\n");
	}
	for (cnt = 0; cnt < numDays; cnt++) {
		printf("\Day %d - High: ", cnt + 1);
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




	return 0;
}