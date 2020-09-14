#include <stdio.h>
float tax(float income);

int main(void)
{
	float income;

	printf("Enter your taxable income amount: ");
	scanf("%f", &income);

	printf("The tax on $%.2f is $%.2f.\n", income, tax(income));

 
}

float tax(float income)
{
	if (income <= 750.00f) return (.01f * income);
	else if (income <= 2250.00f) return ((income - 750) * .02 + 7.50);
	else if (income <= 3750.00f) return ((income - 2250) * .03 + 37.50);
	else if (income <= 5250.00f) return ((income - 3750) * .04 + 82.50);
	else if (income <= 7000.00f) return ((income - 5250) * .05 + 142.50);
	else return ((income - 7000) * .06 + 230.00);
}







