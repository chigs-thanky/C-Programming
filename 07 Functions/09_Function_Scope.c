#include <stdio.h>

int myFunction()
{
    // Variable declaration
    int x = 5;

    // printing that variable
    printf("x = %d", x);
}
int main()
{
    // calling myFunction in main function
    myFunction();

    x += 2;

    printf("x = %d", x);
    // This program will give error as it will say x is not declarated because x is declared only in myFunction() & not in main() function.
}