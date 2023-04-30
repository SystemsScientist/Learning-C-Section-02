#include <stdio.h>
#include <stdlib.h>

int main() {

    // integer variables
    int age;

    age = 30;
    printf("\nThe C language is over %d years old!", age);

    age = 35; // age variable is overwritten
    printf("\nThe C language is over %d years old!", age);

    // character variables
    char x, y, z;

    x = 'A';
    y = 'B';
    z = 'C';

    printf("\nIt's as easy as %c, %c, %c.",x, y, z);

    // floating-point variables
    float pi;

    pi = 22.0 / 7.0;
    printf("\nThe ancients calculated pi as %f.", pi);

    printf("\n");
    return 0;
}
