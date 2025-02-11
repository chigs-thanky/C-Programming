#include <stdio.h>

int main()
{
    int marks[5], i;
    float sum = 0, avg;
    printf("Enter marks of the students: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    avg = sum / 5;
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f", avg);
    return 0;
}