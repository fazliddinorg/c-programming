/*
Loops in C are used to repeat a block of code multiple times.
The main types are `for`, `while`, and `do-while` loops.
A `for` loop is best when the number of iterations is known.
A `while` loop runs as long as a condition is true.
Loops help avoid writing repetitive code manually.
*/

/*FOR*/
for (int i = 0; i < 5; i++)
    printf("%d\n", i);

/*WHILE*/
int i = 0;
while (i < 5)
{
    printf("%d\n", i);
    i++;
}
