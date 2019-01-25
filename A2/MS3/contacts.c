/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"


// +---------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2   |
// |        function definitions below...              |
// |                                                   |
// | *** See hint regarding the getNumbers function    |
// +---------------------------------------------------+


// getName:
void getName(struct Name *name) {
	int check = 0;
	char j;
	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]s", (*name).firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	check = yes();

	if (check == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6[^\n]s%c", (*name).middleInitial, &j);
		if (j != '\n') {
			clearKeyboard();
		}
	}
	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]s", (*name).lastName);
}


// getAddress:
void getAddress(struct Address *address) {
	int check = 0;
	char j;
	printf("Please enter the contact's street number: ");
	(*address).streetNumber = getInt();
	while ((*address).streetNumber <= 0) {
		printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		(*address).streetNumber = getInt();

	}

	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]s", (*address).street);

	printf("Do you want to enter an apartment number? (y or n): ");
	check = yes();

	if (check == 1) {
		printf("Please enter the contact's apartment number: ");
		address->apartmentNumber = getInt();
		while ((*address).apartmentNumber <= 0) {
			printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			address->apartmentNumber = getInt();

		}

	}
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s%c", (*address).postalCode, &j);
	if (j != '\n') {
		clearKeyboard();
	}
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]s", (*address).city);

}


// getNumbers:
// HINT:  Update this function to use the new helper 
//        function "getTenDigitPhone" where applicable
void getNumbers(struct Numbers *numbers) {
	int check = 0;
	//printf("Do you want to enter a cell phone number? (y or n): ");
	//check = yes();

	printf("Please enter the contact's cell phone number: ");
	//scanf(" %10[^\n]s", (*numbers).cell);
	getTenDigitPhone((*numbers).cell);

	printf("Do you want to enter a home phone number? (y or n): ");
	check = yes();

	if (check == 1) {
		printf("Please enter the contact's home phone number: ");
		//scanf(" %10[^\n]s", (*numbers).home);
		getTenDigitPhone((*numbers).home);

	}printf("Do you want to enter a business phone number? (y or n): ");
	check = yes();

	if (check == 1) {
		printf("Please enter the contact's business phone number: ");
		//scanf(" %10[^\n]s", (*numbers).business);
		getTenDigitPhone((*numbers).business);

	}
}



// getContact
void getContact(struct Contact *contact) {
	getName(&(*contact).name);
	getAddress(&(*contact).address);
	getNumbers(&(*contact).numbers);
}
