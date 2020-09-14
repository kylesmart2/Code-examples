#include <stdio.h>

int main(void)
{
	float num, num2;

	while (num > 0)
	{	printf("Enter a number (0 or negative to quit): ");
		scanf("%f", &num);
		if (num > num2)
			num2 = num;
	}
	printf("The largest number is: %.2f\n", num2);
	return 0;
}