#include <stdio.h>

int main()
{
    int a = 10, b = 9;
    int *p, *q;
    p = &a;
    q = &b;
    printf("Value of a=%d\n", a);
    printf("Value of b=%d\n", b);
    printf("Value of a in hexa=%x\n", &a);
    printf("Value of a in hexa=%x\n", p);
    printf("Address of p: %x\n", &p);
    printf("Value of a=%d\n", *p);
    *p = 13;
    printf("Value of a(updated by pointer 'p'): %d", a);
}