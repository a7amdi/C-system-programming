// main.c
#include <stdio.h>
#include "data.h"

int main() {
    if (readData() != 0) {
        printf("Error reading data\n");
        return 1;
    }

    if (name[0] == '\n' || phoneNumber[0] == '\n') {
        printf("Name and phone number must have at least two characters.\n");
        return 1;
    }

    writeData();
    return 0;
}
