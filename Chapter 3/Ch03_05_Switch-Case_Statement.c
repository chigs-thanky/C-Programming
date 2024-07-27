#include <stdio.h>

int main()
{
    int day;
    printf("Enter the day of week in number: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
        /*
        NOTE: USE OF "BREAK;"- WHEN WE DON'T USE A "BREAK;", WE GET RESULTS OF ALL SWITCH CASES AFTER CONDITION IS MATCHED.
        E.G. IF CASE-2 MATCHES, THEN AFTER CASE-2, ALL CASES WILL BE PRINTED.
        */
    default:
        break;
    }
    return 0;
}