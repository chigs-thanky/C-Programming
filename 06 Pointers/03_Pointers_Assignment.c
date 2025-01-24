#include <stdio.h>

int main()
{
    // int a = 10, b = 11;
    float a = 10, b = 11;
    float *p, *q;
    // int *p, *q;
    p = &a;
    q = &b;
    // q = *p;
    // q = p;
    *q = *p;
    // printf("a = %d %d %d", a, *p, q);
    // printf("a = %d %d %d", a, *p, *q);
    printf("a = %f %f %f", a, *p, *q);
}