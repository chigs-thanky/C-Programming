#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], sumArr[5];
    int i;
    printf("Enter the elements of arr1: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the elements of arr2: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr2[i]);

    for (i = 0; i < 5; i++)
    { // If you omit these curly braces from for loop, it will generate garbage value.
        sumArr[i] = arr1[i] + arr2[i];
        printf("sumArr element at index %d is: %d\n", i, sumArr[i]);
    }
    return 0;
}