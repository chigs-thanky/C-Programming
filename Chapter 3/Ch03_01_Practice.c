#include <stdio.h>

int main()
{
    /*
     What will be the output of this program
    int a = 10;
    if (a = 11)
    printf("I am 11");
    else
    printf("I am not 11");

    THIS QUESTION IS ASKED IN INTERVIEW
    */

    int a = 10;
    if (a = 11)    // WHAT MISTAKE I DID IS: I FORGOT TO CHECK WHETHER IT'S "==" OR NOT. THIS CLEARLY ASSIGNS 11 TO a. That's why first statement is correct.
        if (a = 7) // even if your assign "a" with any value, it will consider as true because it's not "0".
            printf("I am 11");
        else
            printf("I am not 11");
    // OUTPUT : Syntax Error
    return 0;
}