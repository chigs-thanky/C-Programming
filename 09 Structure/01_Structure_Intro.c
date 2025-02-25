// Structures help to keep related data together, making code more organized.
#include <stdio.h>

struct Students
{
    /* data */
    // char name[50];
    int age;
    float marks;
};

int main()
{
    struct Students std_6A;
    struct Students std_7A;
    struct Students std_8A;

    // std_6A.name = "Ruchit";
    std_6A.age = 12;
    std_6A.marks = 29.00;

    std_7A.age = 13;
    std_7A.marks = 78.00;

    std_8A.age = 14;
    std_8A.marks = 90.00;
    printf("Std 6th\n");
    printf("Age: %d\nMarks: %.2f\n", std_6A.age, std_6A.marks);
    printf("Std 7th\n");
    printf("Age: %d\nMarks: %.2f\n", std_7A.age, std_7A.marks);
    printf("Std 8th\n");
    printf("Age: %d\nMarks: %.2f", std_8A.age, std_8A.marks);
    return 0;
}