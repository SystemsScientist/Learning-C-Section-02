#include <stdio.h>
#include <stdlib.h>

int main() {

    /*int c;

    printf("Type a letter: ");
    c = getchar();

    // printf("You typed '%c'.\n", c);

    printf("You typed '");
    putchar(c);
    printf("'.\n");*/

    /*int a,b;

    printf("Type two letters: ");
    a = getchar();
    b = getchar();

    printf("You typed '");
    putchar(a);
    printf("' and '");
    putchar(b);
    printf("'.");*/

    // Data is buffered
    int a,b,c;

    printf("Type three letters: ");
    a = getchar();
    putchar(a);
    b = getchar();
    putchar(b);
    c = getchar();
    putchar(c);

    printf("\n");
    return 0;
}
