// Name:Alex O'Hare
// Student Number:
// Email:aohare1@myseneca.ca
// Section:ICP144
// Workshop:ws3_home

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include <stdio.h>
#define NUMS 4

int main(void) {
	int cnt;
	int high[NUMS];
	int low[NUMS];
	int highest;
	int lowest;
	int highLocation = 0;
	int lowLocation = 0;
	double sum = 0.0;
	int day = 0;
	for (cnt = 0; cnt < 4; cnt++) {
		printf("Enter the high value for day %d: ", day + 1);
		scanf("%d", &high[day]);

		printf("Enter the low value for day %d: ", day + 1);
		scanf("%d", &low[day]);

		while (low[day] < -40 || high[day] > 40 || high[day] < low[day]) {

			printf("Incorrect values, temperature must be in the range -40 to 40, high must be greater than low.\n");

			printf("Enter the high value for day %d: ", day + 1);
			scanf("%d", &high[day]);

			printf("Enter the low value for day %d: ", day + 1);
			scanf("%d", &low[day]);
		}

		sum += low[day];
		sum += high[day];
		day++;
	}
	highest = high[0];
	for (cnt = 0; cnt < 4; cnt++) {
		if (high[cnt] > highest) {
			highest = high[cnt];
			highLocation = cnt + 1;
		}
		
	}
	lowest = low[0];
	for (cnt = 0; cnt < 4; cnt++) {
		if (low[cnt] < lowest) {
			lowest = low[cnt];
			lowLocation = cnt + 1;
		}
		
	}
	printf("The average (mean) temperature was: %.2lf\n", sum / 8.0);
	printf("The highest temperature was %d, on day %d\n", highest, highLocation);
	printf("The lowest temperature was %d, on day %d\n", lowest, lowLocation);
	
	return 0;
}