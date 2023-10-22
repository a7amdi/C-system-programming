// data.c
#include <stdio.h>
#include "data.h"

char name[256];
char phoneNumber[256];

int readData() {
    printf("Enter a name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1; // Error reading name
    }

    printf("Enter a phone number: ");
    if (fgets(phoneNumber, sizeof(phoneNumber), stdin) == NULL) {
        return 1; // Error reading phone number
    }

    return 0; // Success
}

int writeData() {
    printf("Name: %sPhone Number: %s\n", name, phoneNumber);
    return 0; // Success
}
