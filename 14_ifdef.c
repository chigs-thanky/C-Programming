#include <stdio.h>

#define DEBUG
int main()
{
#ifdef DEBUG
    printf("Debug mode is ON\n");
#endif
    return 0;
}