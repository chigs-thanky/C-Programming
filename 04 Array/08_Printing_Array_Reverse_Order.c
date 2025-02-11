#include <stdio.h>

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int i;
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}