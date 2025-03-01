#include <stdio.h>

struct copyStruct
{
    int srNo;
    char name[20];
    int age;
};

int main()
{
    // Create a structure variable "cpy1" and assign values
    struct copyStruct cpy1 = {1, "Chirag Thanki", 27};

    // Create another structure variable "cpy2"
    struct copyStruct cpy2;
    cpy2 = cpy1;

    // Print values from cpy1 to cpy2
    // printf("Sr No: %d\nName: %s\nAge: %d", cpy1.srNo, cpy1.name, cpy1.age);
    printf("Sr No: %d\nName: %s\nAge: %d", cpy2.srNo, cpy2.name, cpy2.age);
    return 0;
}