#include <stdio.h>

// Function declaration
int myFunction(int x, int y);
int myName(char fName[]); // Declared a function named myName

// The main method
int main()
{
    int result = myFunction(5, 3); // call the function
    printf("Result is = %d\n", result);
    myName("Chigs"); // Calling myName() in main() with argument.
    return 0;
}

// Function definition
int myFunction(int x, int y)
{
    return x + y;
}
int myName(char fName[])
{
    printf("%s", fName);
}