/*Understanding how memory works in C is important. When you create a basic variable, C will automatically reserve space for that variable. An int variable for example, will typically occupy 4 bytes of memory, while a double variable will occupy 8 bytes of memory. */
#include <stdio.h>

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("int = %lu Bytes\n", sizeof(myInt));
    printf("float = %lu Bytes\n", sizeof(myFloat));
    printf("double = %lu Bytes\n", sizeof(myDouble));
    printf("char = %luByte\n", sizeof(myChar));

    return 0;
}