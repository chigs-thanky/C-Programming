#include <stdio.h>

int main()
{
    int signedInt = -123;
    unsigned int unsignedInt = 123;
    unsigned long unsignedLong = 123456789UL;

    printf("Signed integer (%%d): %d\n", signedInt);
    printf("Unsigned integer (%%u): %u\n", unsignedInt);
    printf("Unsigned long integer (%%lu): %lu\n", unsignedLong);

    return 0;
}
