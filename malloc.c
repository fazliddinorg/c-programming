/*
Use malloc() to allocate memory at runtime.
Remember to free() memory to avoid leaks.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers = malloc(3 * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

    for (int i = 0; i < 3; i++)
        printf("%d ", numbers[i]);

    free(numbers); // free allocated memory
    return 0;
}

