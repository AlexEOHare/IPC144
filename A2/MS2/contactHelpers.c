/* -------------------------------------------
Name:           
Student number: 
Email:          
Section:        
Date:           
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void) {
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt function definition goes here:
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


// getIntInRange function definition goes here:
int getIntInRange(int low, int high) {
	int value = 0;
	value = getInt();

	while (value < low || value > high) {
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", low, high);
		value = getInt();
	}
	return value;
}

// yes function definition goes here:
int yes(void) {
	char yn;
	char j;
	scanf(" %c%c", &yn, &j);
	while (!(yn == 'y' || yn == 'Y'|| yn == 'N' || yn == 'n') || j != '\n') {
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

// menu function definition goes here:
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

// contactManagerSystem function definition goes here:
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
