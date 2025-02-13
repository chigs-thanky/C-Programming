#include <stdio.h>

int main()
{
    int a[2][3], i, j;

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Print array elements
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    return 0;
}