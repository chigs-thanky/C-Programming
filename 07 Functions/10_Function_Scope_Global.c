#include <stdio.h>

int x = 12;
void cThanki()
{
    printf("Answer from cThanki(): %d\n", x);
}

int main()
{
    printf("Answer from main(): %d\n", x);
    cThanki();
}