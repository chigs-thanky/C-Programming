#include <stdio.h>

int main()
{
    int a = 1, b = 0;
    printf("a & b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("NOT(a) = %d and NOT (b) = %d", !a, !b); // This ooperator reverses the output
    return 0;
}