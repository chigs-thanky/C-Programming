/*
. Write a program to find greatest of four numbers entered by the user.*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter four numbers separated by a space: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    printf("Entered numbers are: %d %d %d %d\n", num1, num2, num3, num4);
    int greatest = num1;
    if (num2 > greatest)
    {
        greatest = num2;
    }
    if (num3 > greatest)
    {
        greatest = num3;
    }
    if (num4 > greatest)
    {
        greatest = num4;
    }
    printf("%d is the greatest number.\n", greatest);
    return 0;
}