/*
Type conversion means converting one data type into another.

1. Implicit Type Conversion (Automatic)
Also called "type promotion".
It is done automatically by the compiler when you mix different data types in expressions.

Hierarchy: char → short → int → long → float → double


2. Explicit Type Conversion (Type Casting)
We manually convert one data type into another using cast operators.

Syntax: (type) expression
*/

#include <stdio.h>

int main() {
    char c = 'A';  // ASCII = 65
    int num = 10;

    // Implicit: char to int
    int total = c + num;  // 65 + 10 = 75
    printf("Total (implicit): %d\n", total);

    // Explicit: int to float
    float value = (float)total / 3;
    printf("Average (explicit): %.2f\n", value);

    return 0;
}

