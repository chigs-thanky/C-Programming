#include <stdio.h>

int myFunction(char name[], int age)
{
    printf("Hello %s, your age is: %d.\n", name, age);
}

int mixFunction(int age, float height, char name[])
{
    printf("Your age: %d\nYour height: %.2f cm\nYour name: %s", age, height, name);
}
int main()
{
    myFunction("Chirag", 27);
    myFunction("David", 32);
    myFunction("Ryan", 49);
    mixFunction(27, 175.5, "Chirag"); // Here, in (), we passed arguments for parameters age, height and name.
    // We can use function as many time as we want.
}