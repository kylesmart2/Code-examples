#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int seen[10] = {0};
	int digit, i, a;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	
	while (n > 0)
	{
		digit = n % 10;
		if (digit_seen[digit])
			++seen[digit];
		digit_seen[digit] = true;
		n /= 10;
	}
	
	for (i = 0; i <= 9; i++)
		a += seen[i];
	
	if (a == 0)
		printf("No repeated digits.\n");

	else if (a > 0)
		printf("Repeated digits: ");
		for (i = 0; i <= 9; i++)
			if (seen [i] > 0)
				printf("%d ", i);

	printf("\n");

	return 0;
}