#include <stdio.h>

int main()
{
    // Initialization at Compile Time
    // int a[5] = {1, 2, 0, -1, -2};

    // Initilization at Run Time (Means user will enter the data rather than pre-written data by developer)
    int i; // i should declare first before use
    int a[5];
    printf("Enter the elements of array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Entered elements: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    // printf("\n"); No need to write this line
    return 0;
}