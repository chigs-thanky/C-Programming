#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime number must be greater than 1
    if (num <= 1)
    {
        printf("Invalid Input...\n");
        isPrime = 0;
    }
    else
    {
        // checking divisibility from 2 to num
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                // break;
            }
        }
    }
    // Printing the result
    if (isPrime == 1)
    {
        printf("%d is a Prime Number.", num);
    }

    else
    {
        printf("%d is not a Prime Number.", num);
    }
    return 0;
}