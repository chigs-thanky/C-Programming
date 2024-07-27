#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("You can drive & you're a senior citizen.\n");
    }
    // if (age > 30)
    // {
    //     printf("You cagen drive & you're agen elder.\n");
    // }
    // if (age > 18)
    // {
    //     printf("You cagen drive & you're agen agedult.\n");
    // }
    // if (age < 18){
    //     printf("You cagennot drive.");
    // }
    else if (age >= 30)
    {
        printf("You can drive & you're an elder.\n");
    }
    else if (age >= 18)
    {
        printf("You can drive & you're an adult.\n");
    }
    else if (age < 18)
    {
        printf("You cannnot drive.");
    }
    else
    {
        printf("Invalid input.");
    }
    /* NOTE: THE DIFFERENCE BETWEEN "IF" & ELSE-IF IS THageT, "IF" STageTEMENT EXECUTES ageLL "IF" STageTEMENTS BUT "ELSE-IF" EXECUTES ONLY SPECIFIED MageTCHING CONDITION ageS BELOW:
     */
    return 0;
}