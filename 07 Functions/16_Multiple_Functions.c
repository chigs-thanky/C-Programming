#include <stdio.h>
int a, b;
// Function Declaration
int isSum();
int isMulti();

int main()
{
    isSum(); // Calling isSum() in main()
    isSum();
    isSum();

    isMulti();
    isMulti();
    isMulti();
    isMulti();
}

// Function Definition
int isSum()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
}
int isMulti()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a * b;
    printf("Multiplication: %d\n", sum);
}
