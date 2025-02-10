#include <stdio.h>

void sum(void); // It is always a better practice to use void in arguments when you don't want to pass any arguments.

void main()
{
    sum(2, 7); // Now as we have written void in sum(), it will throw error if you pass any arguments. Here, sum(2, 7) will generate an error.
}

void sum(void)
{
    int a, b, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum=%d\n", sum);
}