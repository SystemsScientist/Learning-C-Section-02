#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Here is a value: %d.\n", 27);

    // %d represents integers
    printf("\nEveryone knows that 2 + 2 = %d.\n", 4);
    printf("Everyone knows that %d + %d = %d.\n", 2, 2, 4);
    printf("Everyone knows that %d + %d = %d.\n", 2, 2, 2 + 2);

    // %s represents strings
    printf("\nYou are a %s.\n", "programmer");

    // %c represents single characters
    printf("\nYou are a %c %s.\n", 'C', "programmer");

    return 0;
}
