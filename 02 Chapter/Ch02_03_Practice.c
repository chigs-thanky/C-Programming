//Write a program to check whether a number is divisible by 97 or not

#include <stdio.h>

int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Entered number is: %d\n", a);
	if (a%97 ==0){
		printf("%d - Divisible", a);
	}
	else{
		printf("%d - Not Divisible", a);
	}
}
