#include <stdio.h>

int main()
{
    int a[5] = {1, 10, 0, -1, 3};
    printf("4th Element in Array: %d", a[5]); // Use index no. to access the element in array

    // Here a[5] does not give any error as there's no 6th element in array but still we get some garbage value and that is because array does not bound check.
    //  Bound checking means checking the boundaries.
    return 0;
}