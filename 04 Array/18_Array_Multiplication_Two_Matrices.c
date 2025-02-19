#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, sum;

    // Reading/Input 1st matrix
    printf("Enter first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Reading 2nd matrix
    printf("Enter second matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // printing 1st matrix
    printf("1st Matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // printing 2nd matrix
    printf("\n2nd Matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication: \n");
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum = a[i][j] * b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}