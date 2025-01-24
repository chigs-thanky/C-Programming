#include <stdio.h>

int main()
{
	int a = 50;
	float b = 43.67;
	int c = 5;

	//	TypeCasting is nothing but changing int-->float & float-->int or any other datatype
	a = (int)b;
	printf("a: %d\n\n", a);

	b = (float)c;
	printf("b: %.2f", b);
	return 0;
}
