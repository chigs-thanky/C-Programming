/*
 Write a program to determine whether a character entered by the user is
lowercase or not.*/
#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character to check if it is lowercase or not?\n");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        printf("%c - It's a lowercase character", c);
    }
    else
    {
        printf("%c - It's NOT a lowercase character", c);
    }
    return 0;
}