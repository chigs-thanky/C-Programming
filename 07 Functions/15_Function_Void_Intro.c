#include <stdio.h>

void sum()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("%d\n", sum);
}

void main()
{
    sum();
    sum();
    sum();
}