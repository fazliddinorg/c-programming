/*
Arrays store multiple values of the same type in a fixed-size block.
Access elements using index, starting at 0.
*/

#include <stdio.h>

int main(void)
{
    // Declare and initialize an array of 3 integers
    int nums[3] = {10, 20, 30};

    // Access and print the first element (index 0)
    printf("First: %d\n", nums[0]);

    // Change the second element (index 1)
    nums[1] = 25;

    // Access and print the updated second element
    printf("Second: %d\n", nums[1]);

    // Access and print the third element (index 2)
    printf("Third: %d\n", nums[2]);

    return 0;
}
