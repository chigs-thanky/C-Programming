/*
3. Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.

*/
#include <stdio.h>

int main()
{
    float income;
    printf("Enter your income: (In this format: 400000) \n");
    scanf("%f", &income);
    if (income < 250000)
    {
        printf("No need to pay tax");
    }
    else if (income >= 250000 && income < 500000)
    {
        printf("You need to pay Rs. %.2f", income * 0.05);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        printf("You need to pay Rs. %.2f", income * 0.2);
    }
    else if (income > 1000000)
    {
        printf("You need to pay Rs. %.2f", income * 0.3);
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}