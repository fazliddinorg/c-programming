/*
Programs become more dynamic when they can take input from the user.
This is where scanf comes in.

Scanf reads user input. You must use & (the address-of operator)
to store the value in the variable.

%d tells scanf to expect an integer.

This allows users to interact with your program
rather than it just printing fixed output.
*/

#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);
}
