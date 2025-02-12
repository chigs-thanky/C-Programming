#include <stdio.h>

int main()
{
    // To check the size of a DataType on a system
    printf("Size of int: %lu bytes.\n", sizeof(int));
    printf("Size of float: %lu bytes.\n", sizeof(float));
    printf("Size of double: %lu bytes.\n", sizeof(double));
    printf("Size of char: %lu byte.", sizeof(char));

    // 2-D Array Initialization

    // At compile time
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int i;

    // At Run Time
    for (i = 0; i < 2)
        return 0;
}