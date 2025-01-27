#include <stdio.h>

void calc()
{
    int x = 5, y = 10;
    int sum = x + y;
    printf("Sum: %d\n", sum);
}

int main()
{
    printf("The sum is below:\n");
    calc();
    calc();
    calc();
    return 0;
}