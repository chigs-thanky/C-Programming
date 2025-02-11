/*Write a program (WAP) to read an array of 10 integers and count total number of odd and even elements.*/

#include <stdio.h>

int main()
{
    int a[10];
    int i, even = 0, odd = 0;

    printf("Enter elements of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            // even = even + 1;
            even++;
        }
        else
        {
            // odd = odd + 1;
            odd++;
        }
    }
    printf("Odd elements are: %d\n", odd);
    printf("Even elements are: %d", even);
    return 0;
}