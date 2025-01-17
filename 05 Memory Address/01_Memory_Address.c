#include <stdio.h>

int main()
{
    int myAge = 43;
    char ch = 'C';
    char ch1 = 'T';
    printf("%p\n", &myAge);
    printf("%c - %p", ch, &ch1);
    return 0;
}