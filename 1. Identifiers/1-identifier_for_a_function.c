#include <stdio.h>

// Function identifier named add
int add(int a, int b) {
    return a + b;
}

int main() {

    // Calling the function using its name
    int sum = add(10, 20);

    printf("%d", sum);

    return 0;
}
