#include <stdio.h>

int main()
{
    if (1)
    {
        printf("Executed!\n");
    }
    if (12.11)
    {
        printf("Executed!\n");
    }
    if ('C')
    {
        printf("Executed!\n");
    }
    if (0)
    {
        printf("Not Executed!");
        // This shows that '0' means off in binary
    }
    return 0;
}