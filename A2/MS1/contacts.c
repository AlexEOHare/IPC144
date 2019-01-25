/* -------------------------------------------
Name:Alex O'Hare
Student number:A00017582
Email:aohare1
Section:SPC
Date:
----------------------------------------------
Assignment: 2
Milestone:  1
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function definitions below...            |
// +-------------------------------------------------+

// getName:
void getName(struct Contact *contact) {
	int i = 0;
	char check;
	printf("Please enter the contact's first name: ");
	scanf(" %[^\n]s", contact[i].name.firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &check);

	if (check == 'y' || 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %[^\n]s", contact[i].name.middleInitial);

	}
	printf("Please enter the contact's last name: ");
	scanf(" %[^\n]s", contact[i].name.lastName);
}

// getAddress:
void getAddress(struct Contact *contact) {
	int i = 0;
	char check;
	printf("Please enter the contact's street number: ");
	scanf("%u", &contact[i].address.streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]s", contact[i].address.street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &check);

	if (check == 'y' || check == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf(" %u", &contact[i].address.apartmentNumber);

	}
	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]s", contact[i].address.postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %[^\n]s", contact[i].address.city);

}

// getNumbers:
void getNumbers(struct Contact *contact) {
	int i = 0;
	char check;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &check);

	if (check == 'y' || check == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %[^\n]s", contact[i].numbers.cell);

	}printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &check);

	if (check == 'y' || check == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf(" %[^\n]s", contact[i].numbers.home);

	}printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &check);

	if (check == 'y' || check == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf(" %[^\n]s", contact[i].numbers.business);

	}
}

// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
// Define Empty function definition below:
void getContact(struct Contact *contact) {

}