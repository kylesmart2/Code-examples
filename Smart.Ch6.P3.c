#include <stdio.h>

int main(void)
{
	int numer, denom, div, gcd;

	printf("Enter a fraction to simplify (n/d): ");
	scanf("%d/%d", &numer, &denom);

	for (div = 1; div <= numer && div <= denom; ++div)
	{	if (numer%div == 0 && denom%div == 0)
				gcd = div;}
	

	printf("The simplified fraction is: %d/%d\n", numer / gcd, denom / gcd);
	return 0;
}