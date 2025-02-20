#include <stdio.h>

int main()
{
    int A[] = {1, 2, 3}; // First array
    int B[] = {4, 5, 6}; // Second array
    int C[3];            // Array to store the result
    int i;

    // Finding the size of the array
    int size = sizeof(A) / sizeof(A[0]);

    // Multiplication of elements
    for (i = 0; i < size; i++)
    {
        C[i] = A[i] * B[i];
    }

    // Display the result
    printf("Resultant Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}
