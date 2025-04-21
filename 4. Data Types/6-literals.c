
/*
Literals are constant values used directly in the code.
They represent fixed values that do not change
during the program execution.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int decimal = 100;
    int hex = 0x2F;
    int octal = 075;
    float pi = 3.1415;
    char letter = 'C';
    char newline = '\n';
    char name[] = "C Language";
    bool isReady = true;
    int *ptr = NULL;

    printf("Decimal: %d\n", decimal);
    printf("Hexadecimal: %x\n", hex);
    printf("Hexadecimal: %#X\n", hex);
    printf("Octal: %o\n", octal);
    printf("Float: %.2f\n", pi);
    printf("Character: %c\n", letter);
    printf("String: %s\n", name);
    printf("Boolean: %d\n", isReady);
    printf("Pointer: %p\n", ptr);

    return 0;
}
