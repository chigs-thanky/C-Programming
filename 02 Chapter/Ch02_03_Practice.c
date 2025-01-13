//Write a program to check whether a number is divisible by 97 or not

#include <stdio.h>

int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("%d\n", a%97);
	printf("0 --> Divisible\nOtherwise non-divisible");
}
