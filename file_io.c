/*
You can read/write files using FILE* and fopen(), fclose(), fscanf(), fprintf().
*/

#include <stdio.h>

int main()
{
    FILE *file = fopen("data.txt", "w");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    fprintf(file, "Hello, file!\n");
    fclose(file);

    return 0;
}

