#include <stdio.h>

int main()
{
    int myInt;
    char myCh;
    float myFloat;
    double myDouble;

    printf("Size of Int = %d\n", sizeof(myInt));
    printf("Size of Char = %lu\n", sizeof(myCh));
    printf("Size of Float = %lu\n", sizeof(myFloat));
    printf("Size of Double = %lu\n", sizeof(myDouble));

    return 0;
}