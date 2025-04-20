/*
The static keyword is used to create static variables.
A static variable is not limited by a scope
and can be used throughout the program.
Its value is preserved even after its scope.
*/

#include <stdio.h>

void test()
{
    static int num = 6;

    num++;

    printf("%d\n", num);

    return;
}

int main() {

    // Extern variable
    test();
    test();
    test();

	return 0;
}

