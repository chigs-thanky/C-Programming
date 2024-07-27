//Calculate the area of a circle and modify the same program to calculate the 
//volume of a cylinder given its radius and height.

#include <stdio.h>

int main()
{
	float radius, height, area, volume;
	const float PI = 3.14159;
	printf("Enter the radius of a circle: ");
	scanf("%f", &radius);
	
	//area of circle
	area = PI * radius * radius;
	printf("Area of a circle with given radius %f is: %.2f\n", radius, area);
	
	printf("Enter the height for cylinder: ");
	scanf("%f", &height);
//	volume of cylinder
	volume = PI * radius * radius * height;
	printf("Volume of a cylinder with given radius %f and height %f is: %.2f", radius, height, volume);
}
