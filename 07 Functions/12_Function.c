#include <stdio.h>

// Create a function
void myFunction()
{
    printf("I just got executed!");
}

// Creating a function named Chigs
void tChigs(int a, int b)
{
    printf("\nMy name is Chirag!\n");
    int sum = a + b;
    printf("%d", sum);
}

int multi(int a, int b)
{
    return printf("\n%d", a * b);
}
int main()
{
    myFunction(); // call the function
    tChigs(2, 5); // Calling function and passing arguments
    multi(5, 7);

    return 0;
}