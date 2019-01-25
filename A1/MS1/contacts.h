#ifndef SICT_CONTACTS_H__
#define SICT_CONTACTS_H__
/* -------------------------------------------
Name:Alex O'Hare
Student number:A00017582
Email:aohare1
Section:SCP
Date:31/10/2018
----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code here...
struct Address {
	unsigned int streetNumber;
	char street[41];
	unsigned int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
// Place your code here...
struct Numbers {
	char cell[11];
	char home[11];
	char business[11];
};
#endif