#include <stdio.h>

int main(void)
{

	int a, remainder, first, middle;
	printf("Enter a three-digit number: ");
	scanf("%d",&a);

	first = a / 100;
	middle = (a / 10) % 10;
	remainder = a % 10;

	printf("The reversal is: %d%d%d\n", remainder, middle, first);

    return 0;
}
