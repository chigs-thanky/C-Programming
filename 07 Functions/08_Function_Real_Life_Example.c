#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

float toFahrenheit(float celsius)
{
    return celsius * (9.0 / 5.0) + 32;
}

int main()
{
    // Set a fahrenheit value
    float f_value = 98.8;
    // Set a celsius value
    float c_value = 25.00;

    // Call the function with the fahrenheit value
    float cresult = toCelsius(f_value);
    // Call the function with the celsius value
    float fresult = toFahrenheit(c_value);

    // Print the fahrenheit value
    printf("Fahrenheit: %.2f\n", f_value);
    // Print the celsius value
    printf("Calsius: %.2f\n", c_value);

    // Print the result
    printf("Convert Fahrenheit to Celsius: %.2f\n", cresult);
    // Print the result
    printf("Convert Celsius to Fahrenheit : %.2f\n", fresult);

    return 0;
}