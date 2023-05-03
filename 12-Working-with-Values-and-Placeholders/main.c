/*
    Author: Matt Johnson
    Subject: C basics
    purpose:
    Date: 05/03/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // displays one value
    printf("Here is a value: %d\n", 27);

    // displays three values
    printf("Everyone knows that %d + %d = %d\n", 2, 2, 4);

    // displays two values and one expression
    printf("Everyone knows that %d + %d = %d\n", 2, 2, 2 + 2);

    // displays one string
    printf("You are a %s\n", "programmer");

    //displays one character and one string
    printf("You are a %c %s\n", 'C', "programmer");

    return 0;
}
