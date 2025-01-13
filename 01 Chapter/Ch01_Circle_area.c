#include <stdio.h>

int main()
{
    float radius, area;
    const float PI = 3.14159;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
