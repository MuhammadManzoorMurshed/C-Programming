
/*
Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d

The integer data type can also be used as:
unsigned int: It can store the data values from zero to positive numbers, but it can’t store negative values
short int: It is lesser in size than the int by 2 bytes so can only store values from -32,768 to 32,767.
long int: Larger version of the int datatype so can store values greater than int.
unsigned short int: Similar in relationship with short int as unsigned int with int.
*/

#include <stdio.h>

int main() {
    int var = 22;

    printf("var = %d", var);

    return 0;
}
