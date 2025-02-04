#include <stdio.h>

int main()
{
    int a[] = {2, 4, 3, 0, 7};
    int *p = a;
    int *q = &a[3];
    printf("*p=%d\n*q=%d", *p, *q);
    printf("\np-q: %d", p - q);
    printf("\nq-p: %d", q - p);
    // q = q - 1;
    q -= 1; // works same as q=q-1
    printf("\n*q: %d", *q);
    // p = p + 4;
    p += 4; // works same as p=p+4
    printf("\n*p: %d", *p);
    printf("\np-q: %d", p - q);
    printf("\nq-p: %d", q - p);
}
