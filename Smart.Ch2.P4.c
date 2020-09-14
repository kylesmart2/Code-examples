#include <stdio.h>

#define TAX .05f


int main(void)
{
	
	int amount, tax, total;
	printf("Enter a price that you wish to add 5 percent tax to: ");
	scanf(" %.2f", &amount);
	
	tax = amount * TAX;
	
	total = amount + tax;
	printf("With tax added: $%d", total);
	return 0;

}