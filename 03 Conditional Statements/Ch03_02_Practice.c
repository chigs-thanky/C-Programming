/*
 Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    printf("Enter marks of subject-1: ");
    scanf("%d", &sub1);
    printf("Enter marks of subject-2: ");
    scanf("%d", &sub2);
    printf("Enter marks of subject-3: ");
    scanf("%d", &sub3);
    if (sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("Sorry, you're Failed for not meeting passing criteria in individual subjects!");
    }
    else if ((sub1 + sub2 + sub3) / 3 < 40)
    {
        printf("Sorry, you're Failed for not meeting passing criteria in total subjects!");
    }

    else
    {
        printf("Congratulations, you're Passed!");
    }

    return 0;
}