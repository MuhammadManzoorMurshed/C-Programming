/*
The void data type in C is used
to indicate the absence of a value.
Variables of void data type are not allowed.
It can only be used for pointers
and function return type and parameters.
*/

#include <stdio.h>
#include <stdlib.h>

// 1. A function that returns nothing (void return type)
void greet(void) {
    printf("Hello, welcome to the void demo!\n");
}

// 2. A function that takes a void pointer and prints the value it points to
void printValue(void *ptr, char type) {
    if (type == 'i') {
        printf("Integer value: %d\n", *(int *)ptr);
    } else if (type == 'f') {
        printf("Float value: %.2f\n", *(float *)ptr);
    } else {
        printf("Unknown type.\n");
    }
}

int main(void) {
    // greet() takes no arguments and returns nothing
    greet();

    // 3. void pointer pointing to different types of data
    int a = 42;
    float b = 3.14;

    void *vptr;   // ✅ Valid: void pointer

    vptr = &a;
    printValue(vptr, 'i');  // Passing int via void pointer

    vptr = &b;
    printValue(vptr, 'f');  // Passing float via void pointer

    // ❌ Invalid: you cannot declare a void variable
    // void x;  // ❌ Uncommenting this will give a compile-time error

    return 0;
}

// This code is giveb by ChatGPT.
