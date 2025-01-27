#include <stdio.h>

int myFunction(char name[])
{
    printf("Hello %s!\n", name);
}
int myNum(int a)
{
    printf("Entered Number: %d\n", a);
}
float myFloat(float a)
{
    printf("Float Value: %.2f\n", a);
}
int main()
{
    myFunction("Chigs");
    myFloat(12.8);
    myNum(7);
    myFunction("World!");
    return 0;
}