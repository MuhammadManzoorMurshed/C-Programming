/*
The extern keyword is used to declare a variable or a function
that has an external linkage outside of the file declaration.
*/

#include <stdio.h>

int main() {

    // Extern variable
    extern int a;

	printf("%d", a);

	return 0;
}
