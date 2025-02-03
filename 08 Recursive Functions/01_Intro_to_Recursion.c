// Recursive Function: When a function calls itself, it's called a Recursive Function.

#include <stdio.h>

// Function Declaration
void display(int n);

// Main Function
int main()
{
    int n;
    display(5);
    return 0;
}

// Function Definition
void display(int n)
{
    if (n < 1)
    {
        return;
    }
    else
    {
        printf("%d", n);
        display(n - 1);
        printf("%d", n);
    }
}