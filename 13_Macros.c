#include <stdio.h>

#define SQUARE(x) ((x) * (x))

#define ADDITION(a, b) (a + b)

#define MULTI(a, b, c) (a * b * c)

int main()
{
    printf("Square of 4: %d\n", SQUARE(4));
    printf("a + b = %d\n", ADDITION(5, 3));
    printf("a x b x c = %d", MULTI(5, 4, 2));
    return 0;
}