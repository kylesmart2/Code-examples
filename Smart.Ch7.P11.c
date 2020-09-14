#include <stdio.h>

int main(void)
{
	char first, remainder, last;

	printf("Enter a first and last name: ");
	scanf(" %c", &first);

	while ((remainder = getchar()) != ' ')
		printf("");

	/* ^^^ Gets rid of the remainder of the first name  */

	while ((last = getchar()) != '\n')
		if (last != ' ')
			printf("%c", last);

	printf(", %c.\n", first);

	return 0;
}