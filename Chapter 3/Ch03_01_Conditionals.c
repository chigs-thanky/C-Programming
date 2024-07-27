#include <stdio.h>

int main()
{
	int age;
	printf("Please enter your age: ");
	scanf("%d", &age);

	if (age > 15)
	{
		printf("We're inside if statement!\n");
		printf("Your age is above 15");
	}
	if (age % 5 == 0)
	{
		printf("We're inside if statement!\n");
		printf("Your age is divisible by 5");
	}
	else
	{
		printf("Invalid Input");
	}
	return 0;
}
