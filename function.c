/*
Functions in C are reusable blocks of code.
They help organize your program and avoid repetition.
A function has a return type, name, and optional parameters.
Use `void` if it returns nothing.
Use `return` to send back a value.
*/

/*FUNCTION*/
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(3, 4);
    printf("Sum: %d\n", result);
    return 0;
}
