#include <stdio.h>

int main()
{
    int a = 10, b = 9, c;
    int *p, *q;
    p = &a;
    q = &b;
    // *p = &a, &b;
    // p = (&a, &b);
    // q = &b;
    c = *p;
    printf("Value of a=%d\n", a);
    printf("Value of b=%d\n", b);
    printf("Value of a in hexa=%x\n", &a);
    printf("Value of a in hexa=%x\n", p);
    printf("Address of p: %x\n", &p);
    printf("Value of a=%d\n", *p);
    printf("Value of c=%d\n", c);
    printf("Value of b using pointer: %d", *q);
}