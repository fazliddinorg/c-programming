/*
* C allows you to make decisions using if, else if, and else.
 This helps your program react differently based on different inputs or states.
* Takes user input for a score using `scanf`, then checks conditions.
* Uses `if`, `else if`, and `else` to decide which grade to print.
* Prints "A" for ≥90, "B" for ≥80, and "C or lower" otherwise.

 */
#include <stdio.h>

int main(void)
{
    int score;
    printf("Enter score: ");
    scanf("%d", &score);

    if (score >= 90)
        printf("Grade: A\n");
    else if (score >= 80)
        printf("Grade: B\n");
    else
        printf("Grade: C or lower\n");
}
