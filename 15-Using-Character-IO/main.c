/*
    Author: Matt Johnson
    Subject: C basics
    purpose:
    Date: 05/04/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /*
    int d;

    printf("Type a letter: ");
    d = getchar();

    printf("You typed '%c'\n", d);
    */

    int a, b, c;

    printf("\nType three letters: ");
    a = getchar();
    putchar(a);

    b = getchar();
    putchar(b);

    c = getchar();
    putchar(c);

    return 0;
}
