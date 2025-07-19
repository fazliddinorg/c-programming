// Pointers store memory addresses.
// * declares a pointer, & gets the address of a variable.

#include <stdio.h>

int main(void)
{
    // Declare an integer variable
    int x = 10;

    // Declare a pointer to an int, and store the address of x
    int *p = &x;

    // Print the value of x directly
    printf("Value of x: %d\n", x);

    // Print the address of x using &
    printf("Address of x: %p\n", &x);

    // Print the address stored in pointer p
    printf("Pointer p points to: %p\n", p);

    // Dereference the pointer to access the value at that address
    printf("Value at address p points to: %d\n", *p);

    // Change x using the pointer
    *p = 20;
    printf("New value of x after *p = 20: %d\n", x);

    return 0;
}
