/* 
int- is for integers (whole numbers).

float- holds decimal numbers.

char- stores single characters.

printf- formats and prints each variable using format specifiers 
(%d, %.2f, %c).

C is a statically typed language, 
which means you must declare the type of variable before using it.
*/


#include <stdio.h>

int main(void)
{
    int age = 25;
    float height = 1.75;
    char initial = 'F';

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Initial: %c\n", initial);
}
