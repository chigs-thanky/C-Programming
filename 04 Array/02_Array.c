#include <stdio.h>

int main()
{
    int n, i;

    // Prompt the user for the number of elements
    printf("Enter the number of ages: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of ages.\n");
        return 1;
    }

    int ages[n];

    // Input ages from the user
    printf("Enter the ages:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ages[i]);
    }

    // Find the lowest age
    int lowestAge = ages[0];
    for (i = 1; i < n; i++)
    {
        if (lowestAge > ages[i])
        {
            lowestAge = ages[i];
        }
    }

    // Output the result
    printf("The lowest age in the array is: %d\n", lowestAge);

    return 0;
}
