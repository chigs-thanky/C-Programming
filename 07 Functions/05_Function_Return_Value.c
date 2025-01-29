#include <stdio.h>

int calcAdd(int x, int y)
{
    return x + y;
}

int calcSub(int x, int y)
{
    return x - y;
}

int calcMul(int c, int d)
{
    return c * d;
}

int calcDiv(int a, int b)
{
    return a / b;
}

int main()
{
    int result1 = calcAdd(5, 3);
    int result2 = calcSub(8, 2);
    int result3 = calcMul(15, 15);
    int result4 = calcDiv(20, 4);

    printf("Addition: %d\n", result1);
    printf("Subtraction: %d\n", result2);
    printf("Multiplication: %d\n", result3);
    printf("Division: %d", result4);

    return 0;
}