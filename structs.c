// This program demonstrates how to use structs in C.
// A struct is a custom data type that groups related variables together.
// Here, we define a struct called Person with two fields: name and age.
// Then we create a variable of type Person, initialize it, and print its contents.

#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person p = {"Ali", 30};
    printf("Name: %s, Age: %d\n", p.name, p.age);
    return 0;
}
