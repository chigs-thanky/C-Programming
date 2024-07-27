/*
 Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    printf("Enter marks of subjects followed by a space: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    if ((sub1 >= 33 && sub2 >= 33 && sub3 >= 33) && (((sub1 + sub2 + sub3) / 300) * 100 >= 40))
    {
        printf("Congratulations, you're Passed! %d", sub1 && sub2 && sub3);
    }
    else
    {
        printf("Sorry, you're Failed!");
    }

    return 0;
}