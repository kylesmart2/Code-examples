#include <stdio.h>

int main(void)
{
	int frac1, frac2;
	int num1, den1, num2, den2;
	int resultnum, resultdenom;

	printf("Enter two fractions seperated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2);

	resultnum = num1*den2+num2*den1;
	resultdenom = den1*den2;

	printf("The sum si %d/%d\n", resultnum, resultdenom);

	return 0;


}