#include <stdio.h>

void calculateSum(int x, int y)
{
    int sum = x + y;
    printf("The sum of %d + %d is: %d\n", x, y, sum);
}

void calculateMulti(int x, int y)
{
    int mul = x * y;
    printf("The multiplication of %d x %d = %d", x, y, mul);
}
int main()
{
    calculateSum(5, 3);
    calculateSum(8, 2);
    calculateSum(15, 15);
    calculateMulti(5, 4);
    return 0;
}