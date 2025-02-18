#include <stdio.h>

int main()
{
    int a[3][3], i, j, sumRow, sumCol;

    printf("Enter the matrix: ");
    // Reading matrix/Input
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Printing value
    for (i = 0; i < 3; i++)
    {
        // sumRow = 0, sumCol = 0;
        sumRow = sumCol = 0;
        for (j = 0; j < 3; j++)
        {
            sumRow = sumRow + a[i][j];
            sumCol = sumCol + a[j][i];
        }
        printf("sumRow = %d, SumCol = %d\n", sumRow, sumCol);
    }
    return 0;
}