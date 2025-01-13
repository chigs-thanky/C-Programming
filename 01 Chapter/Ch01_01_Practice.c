//Write a C program to calculate area of a rectangle:
//a. Using hard coded inputs.
//b. Using inputs supplied by the user.

#include <stdio.h>

	int main()
	{
		int l, b;
		
//a. Using Hard coded input
//		l = 3;
//		b = 4;
//		printf("Area of Rectangle: %d", l * b);

//b. Using input supplied by user
		printf("Enter length: ");
		scanf("%d", &l);
		printf("Enter breadth: ");
		scanf("%d", &b);
		printf("Area of Rectangle: %d", l * b);
		return 0;
	}

