#include <stdio.h>

// Global variable
int x = 5;
int Chigs = 12;

void myFunction()
{
    printf("Within MyFunction\n");
    printf("x: %d\n", x++); // Increment the value of x by 1 and print it
    printf("Chirag = %d\n", Chigs++);
}

int main()
{
    myFunction();
    printf("\nWithin Main()\n");
    printf("x: %d (Incremented by 1)\n", x);          // Print the global variable x
    printf("Chirag: %d (Incremented by 1)\n", Chigs); // Print the global variable Chigs
    return 0;
}