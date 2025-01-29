#include <stdio.h>

int calcSum(int a, int b)
{
    return a + b;
}

int main()
{
    int resultarray[5];

    resultarray[0] = calcSum(5, 4);
    resultarray[1] = calcSum(1, 1);
    resultarray[2] = calcSum(4, 9);
    resultarray[3] = calcSum(12, 26);
    resultarray[4] = calcSum(10, 97);

    for (int i = 0; i < 5; i++)
    {
        printf("Result: %d\n", resultarray[i]);
    }
}