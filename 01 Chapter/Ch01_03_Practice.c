//Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).

#include <stdio.h>

int main() 
{
    float celsius, fahrenheit, ctof, ftoc;
//    NOTE: ctof - celsius to fahreheit, ftoc - fahrenheit to celsius
    
//From Calsius to Fahrenheit
    // Prompt the user to enter temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    ftoc = (celsius * 9 / 5) + 32;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, ftoc);
    
//From Fahrenheit to celsius
     // Prompt the user to enter temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    ctof = 5.0/9.0 * (fahrenheit - 32);

    // Display the result
    printf("%.2f Fahrenheit is equal to %.2f Calsius\n", fahrenheit, ctof);

    return 0;
}

