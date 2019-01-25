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

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:

#include <string.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:

#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause:
void pause(void) {
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:
int getInt(void) {
	int value = 0;
	char junk;
	scanf("%d%c", &value, &junk);
	while (junk != '\n') {
		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &value, &junk);
	}
	return value;
}

// getIntInRange:
int getIntInRange(int low, int high) {
	int value = 0;
	value = getInt();

	while (value < low || value > high) {
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", low, high);
		value = getInt();
	}
	return value;
}

// yes:
int yes(void) {
	char yn;
	char j;
	scanf(" %c%c", &yn, &j);
	while (!(yn == 'y' || yn == 'Y' || yn == 'N' || yn == 'n') || j != '\n') {
		if (j != '\n') {
			clearKeyboard();
		}
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf(" %c%c", &yn, &j);
	}
	if (yn == 'y' || yn == 'Y') {
		return 1;
	}
	return 0;
}

// menu:
int menu(void) {
	int value = 0;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\nSelect an option:> ");
	value = getIntInRange(0, 6);
	printf("\n");
	return value;
}

// contactManagerSystem:
void contactManagerSystem(void) {
	int choice = 1;
	int exit = 0;
	while (exit != 1) {
		choice = menu();
		switch (choice) {
		case 0:
			printf("Exit the program? (Y)es/(N)o: ");
			exit = yes();
			printf("\n");
			break;
		case 1:
			printf("<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 2:
			printf("<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 6:
			printf("<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		}
	}
	printf("Contact Management System: terminated\n");

}

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10-digit chars entered)
// ---------------------------------------------------------------------------------
// NOTE: Modify this function to validate only numeric character digits are entered
// ---------------------------------------------------------------------------------
void getTenDigitPhone(char telNum[])
{
    int needInput = 1;

    while (needInput == 1) {
        scanf("%10s", telNum);
        clearKeyboard();

        // (String Length Function: validate entry of 10 characters)
        if (strlen(telNum) == 10 && strspn(telNum, "0123456789") == strlen(telNum))
            needInput = 0;
				
        else
            printf("Enter a 10-digit phone number: ");
						
    }
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
    return -1;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader (){


}


// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int temp) {


}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact* contacts) {

}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact contacts[], int temp) {

}


// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact contacts[], int temp) {

}


// addContact:
// Put empty function definition below:
void addContact(const struct Contact contacts[], int temp ) {

}


// updateContact:
// Put empty function definition below:
void updateContact(struct Contact contacts[], int temp) {

}


// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact contacts[], int temp) {

}


// sortContacts:
// Put empty function definition below:
void sortContact(struct Contact contacts[], int temp) {

}