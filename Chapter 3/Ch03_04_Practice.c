/*
 Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.
*/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year to check whether it is a leap year or not: \n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d - It's a leap year", year);
    }
    else
    {
        printf("%d - It's NOT a leap year", year);
    }
    return 0;
}