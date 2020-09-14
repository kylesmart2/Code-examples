#include <stdio.h>

int main(void)
{
	int income;

	printf("Enter your taxabe income amount: ");
	scanf("%d", &income);

	if (income <= 750.00f)
		printf("You owe $%.2f\n", income * .01);
	else if (income <= 2250.00f)
		printf("You owe $%.2f\n", (income - 750) * .02 + 7.50);
	else if (income <= 3750.00f)
		printf("You owe $%.2f\n", (income - 2250) * .03 + 37.50);
	else if (income <= 5250.00f)
		printf("You owe $%.2f\n", (income - 3750) * .04 + 82.50);
	else if (income <= 7000.00f)
		printf("You owe $%.2f\n", (income - 5250) * .05 + 142.50);
	else 
		printf("You owe $%.2f\n", (income - 7000) * .06 + 230.00);


	return 0;
}