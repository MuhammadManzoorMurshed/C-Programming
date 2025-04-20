/*
Register keywords tell the compiler
to store variables in the CPU register instead of memory.
Frequently used variables are kept in the CPU registers
for faster access.
*/

#include <stdio.h>

int main() {

    // Extern variable
    register char ch = 'm';

	printf("%c", ch);

	return 0;
}
