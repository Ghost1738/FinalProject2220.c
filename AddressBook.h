#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DIM 10

struct person {
	char name[40];
	char surname[40];
	char date[11];
	char number[11];
    char address[100];
};

typedef struct person Person;

void dataEntry(Person* person);
void printPerson(Person person);
void printAddressBook(Person* addbook[10]);