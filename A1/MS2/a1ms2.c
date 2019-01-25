/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"

int main (void)
{
    // Declare variables here:
	struct Name person[] = { {0} };
	struct Address dwelling[] = { {0} };
	struct Numbers phone[] = { {0} };
	int i = 0;
	char check = "n";
    // Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");


    // Contact Name Input:
	printf("Please enter the contacts first name: ");
	scanf("%30s", &person[i].firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &check);
	if (check == 'y') {
		printf("Please enter the contact's middle intial(s): ");
		scanf("%6s", &person[i].middleInitial);

	}
	printf("Please enter the contact's last name: ");
	scanf("%35s", &person[i].lastName);
	printf("%s, %s, %s", person[i].firstName, person[i].middleInitial, person[i].lastName);
    // Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf("%u", &dwelling[i].streetNumber);



    // Contact Numbers Input:



    // Display Contact Summary Details



    // Display Completion Message



    return 0;
}

/*  SAMPLE OUTPUT:
    
    Contact Management System
    -------------------------
    Please enter the contact's first name: Tom
    Do you want to enter a middle initial(s)? (y or n): y
    Please enter the contact's middle initial(s): L. A.
    Please enter the contact's last name: Wong Song
    Please enter the contact's street number: 20
    Please enter the contact's street name: Keele Street
    Do you want to enter an apartment number? (y or n): y
    Please enter the contact's apartment number: 40
    Please enter the contact's postal code: A8A 4J4
    Please enter the contact's city: North York
    Do you want to enter a cell phone number? (y or n): Y
    Please enter the contact's cell phone number: 9051116666
    Do you want to enter a home phone number? (y or n): Y
    Please enter the contact's home phone number: 7052227777
    Do you want to enter a business phone number? (y or n): Y
    Please enter the contact's business phone number: 4163338888

    Contact Details
    ---------------
    Name Details
    First name: Tom
    Middle initial(s): L. A.
    Last name: Wong Song

    Address Details
    Street number: 20
    Street name: Keele Street
    Apartment: 40
    Postal code: A8A 4J4
    City: North York

    Phone Numbers:
    Cell phone number: 9051116666
    Home phone number: 7052227777
    Business phone number: 4163338888

    Structure test for Name, Address, and Numbers Done!
*/