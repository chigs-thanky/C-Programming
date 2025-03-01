#include <stdio.h>
// Create a structure
struct Students
{
    int rollNo;
    // char fName[]; //Variable array-size is not valid
    // char lName[]; //Flexible array-size is not valid
    // First you need to give it a size
    char fName[20];
    char lName[20];
    int marks;
};

int main()
{
    // Create structure variable and assign a value
    struct Students stu1 = {1, "Chirag", "Thanki", 29};
    struct Students stu2 = {2, "Chigs", "Thanky", 27};

    // print values
    printf("%d %s %s %d\n", stu1.rollNo, stu1.fName, stu1.lName, stu1.marks);
    printf("%d %s %s %d\n", stu2.rollNo, stu2.fName, stu2.lName, stu2.marks);
    return 0;
}