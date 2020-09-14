#include <stdio.h>

int main(void)
{

	int a, remainder, first;
	printf("Enter a two-digit number: ");
	scanf("%d",&a);

	first = a / 10;
	remainder = a % 10;

	printf("The reversal is: %d%d\n", remainder, first);

	return 0;
}
