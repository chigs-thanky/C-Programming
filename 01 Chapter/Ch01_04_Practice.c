//Write a program to calculate simple interest for a set of values representing principal, 
//number of years and rate of interest.

#include <stdio.h>

int main()
{
//	Simple Interest = PxRxN/100;
//	Where	P = Principal Amount (Initial Money)
//			R = Rate of interest (in %)
//			T = Time period in years
	float p, r;
	int t;
	
//	Formula
	float SI;
	
	printf("Enter principal/initial amout (money): ");
	scanf("%f", &p);
	printf("Enter interest rate (in percentage): ");
	scanf("%f", &r);
	printf("Enter time duration (in years): ");
	scanf("%d", &t);
	SI = (p * r * t)/100;
	printf("Simple Interest: %f", SI);
}
