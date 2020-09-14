#include <stdio.h>

int main(void)
{
	int x, num;
	printf("Enter a number: ");
	scanf("%d", &x);
	num = 3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+7*(x)-6;

	printf("The answer to the polynomial where x=%d is: %d",x, num );
	return 0;

}