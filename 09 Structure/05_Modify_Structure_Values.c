#include <stdio.h>
// To use string functions, you need to add string header file as below:
#include <string.h>

// Create a structure
struct myStructure
{
    int myNum;
    char myLetter, myString[20];
};

int main()
{
    // Create a structure variable and assign value to it
    struct myStructure s1 = {1, 'C', "Chigs Thanky"};

    // Modify values
    s1.myLetter = 'R';

    // s1.myString = "Aaron";//Invalid for array
    // Correct syntax would be as follow:
    strcpy(s1.myString, "Aaron Christian");
    s1.myNum = 12;

    // Print values
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
    return 0;
}