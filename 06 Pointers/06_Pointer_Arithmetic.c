#include <stdio.h>

int main()
{
    int a[5] = {1, 3, -7, 4, 9};
    int *p = &a[0];
    printf("Value is: %d\n", *p);
    printf("Address is: %u\n", p);
    p += 3;
    printf("Value is: %d\n", *p);
    printf("Address is: %u\n", p);
}

/*
Explanation
Value is: 1
Address is: 6422280
Value is: 4
Address is: 64222924

We are getting here address 6422280 & 6422292 (added 12 bytes because 1 int takes 4 bytes, so 3 * 4 = 12 bytes and adding 12 bytes to 6422280 becomes 6422292.)
*/