#include <stdio.h>
#include <string.h>

struct myDetails
{
    char firstName[30];
    char lastName[30];
    int age;
};

int main()
{
    struct myDetails c;
    struct myDetails s;

    // Assign a value to the string using the strcpy function
    strcpy(c.firstName, "Chigs");
    strcpy(c.lastName, "Thanky");
    // strcpy(c.age, 27); //Gives Error because age is not a string
    c.age = 27;

    strcpy(s.firstName, "Bunny");
    strcpy(s.lastName, "Mehta");
    s.age = 26;

    // Print the value
    printf("First Name: %s\n", c.firstName);
    printf("Last Name: %s\n", c.lastName);
    printf("Age: %d\n", c.age);

    printf("\n");

    printf("First Name: %s\n", s.firstName);
    printf("Last Name: %s\n", s.lastName);
    printf("Age: %d\n", s.age);

    return 0;
}