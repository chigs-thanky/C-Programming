#include <stdio.h>

static inline int calcSum(int a, int b)
{
    return a + b;
}

int main()
{
    int resultarray[] = {
        calcSum(5, 4),
        calcSum(1, 1),
        calcSum(4, 9),
        calcSum(12, 26),
        calcSum(10, 97),
        calcSum(1, 1)};

    for (int i = 0; i < sizeof(resultarray) / sizeof(resultarray[0]); i++)
    {
        printf("Result: %d\n", resultarray[i]);
    }

    return 0;
}
