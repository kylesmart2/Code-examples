#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int count = 0;
	char ch;

	printf("Please enter a sentence: ");

	while ((ch = getchar()) != '\n')
	{
		/*I tried using toupper(ch) here, but it returned a value of zero 
		in that case*/
		if (ch == 'A' || ch == 'a')
			count++; /* So I added the lower case of each letter*/
		else if (ch == 'E' || ch == 'e')
			count++;
		else if (ch == 'I' || ch == 'i')
			count++;
		else if (ch == 'O' || ch == 'o')
			count++;
		else if (ch == 'U' || ch == 'u')
			count++;



	}
	printf("Your sentence has %d vowels.\n", count);

	return 0;
}