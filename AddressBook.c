#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include "AddressBook.h"

// Variables & Constants
int SIZE = 20, i = 0;
double result = 0.0, avg = 0.0, max = 0.0;
double number[20] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, };
char bookMenu = '\0';
bool gotInput = false;

int addContact() {
	printf("Insert name: ");
	gets(person->name);
	printf("Insert surname: ");
	gets(person->surname);
	printf("Insert date of birth [mm/dd/yyyy]: ");
	gets(person->date);
	printf("Insert phone number: ");
	gets(person->number);
}
int delContact() {
	
}
int doSearch(int numbers[], int numbersSize, int key) {
   int mid;
   int low;
   int high;
   
   low = 0;
   high = numbersSize - 1;
   
   while (high >= low) {
      mid = (high + low) / 2;
      if (numbers[mid] < key) {
         low = mid + 1;
      }
      else if (numbers[mid] > key) {
         high = mid - 1;
      }
      else {
         return mid;
      }
   }
   
   return -1; // not found
}
int main(void) {
   int numbers[10];
   const int NUMBERS_SIZE = 8;
   int i;
   int key;
   int keyIndex;
   
   printf("NUMBERS: ");
   for (i = 0; i < NUMBERS_SIZE; ++i) {
      printf("%d ", numbers[i]);
   }
   printf("\n");
   
   printf("Enter a Contact: ");
   scanf("%d", &key);
   
   keyIndex = doSearch(numbers, NUMBERS_SIZE, key);
   
   if (keyIndex == -1) {
      printf("%d was not found.\n", key);
   }
   else {
      printf("Found %d at index %d.\n", key, keyIndex);
   }
   
   return 0;
}

int main() {
	do {
		// Menu Input
		printf("Calculator Menu.\n\n");
		printf("(A)dd Contact\n");
		printf("(R)emove Contact\n");
		printf("(S)Search\n");
		
		printf("e(X)it.\n");
		printf("Choice: ");
		// Selection for menu // Space helps prevent common white sapce error
		scanf_s(" %c", &bookMenu);

		// Menu Processing
		switch (bookMenu) {
			// Getting numbers
			case 'A':
			case 'a':
				addContact();
				break;
				// Number Check if false will ask to run G or g.
				gotInput = true;
			// Addition
			case 'R':
			case 'r':
				if (gotInput == true) {
					delContact();
				}
				else { printf("Please enter G or g first."); }
				break;
			// Subtration
			case 'S':
			case 's':
				if (gotInput == true) {
					doSearch();
				}
				else { printf("Please enter G or g first."); }
				break;
			// Exit statement
			case 'X':
			case 'x':
				printf("Thank you for using our simple address book! Good-bye!\n\n");
				break;
			// Checking input
			default:
				printf("***Please pick a vaild input.***");
				break;
		}
	} while ((bookMenu != 'x') || (bookMenu != 'X'));
	return 0;
}
