/*
    Author: Matt Johnson
    Subject: C basics
    purpose: program executes the variable 'age'
    Date: 05/04/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // integer variables
    int age;

    age = 30;
    printf("The C language is over %d years old!\n", age);

    age = 35; // new age value overwrites the previous age
    printf("The C language is over %d years old!\n", age);

    // character variables
    char x, y, z;

    x = 'A';
    y = 'B';
    z = 'C';

    printf("\nIt's as easy as %c, %c, %c\n", x, y, z);

    // floating-point variables
    float pi;

    pi = 22.0 / 7.0;
    printf("\nThe ancients calculated PI as %f\n", pi);

    return 0;
}
