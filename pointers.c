// Pointers store memory addresses.
// Use * to declare, & to get address.

#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value using pointer: %d\n", *ptr);

    return 0;
}
