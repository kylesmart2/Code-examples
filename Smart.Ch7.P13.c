#include <stdio.h>

int main(void)
{
	float words = 1, count = 0;
	char ch;

	printf("Enter a sentence: ");

	
	while ((ch = getchar()) != '\n')
		if (ch == ' ')
			words++;
		else if (ch != ' ')
			count++;
		
	printf("Average word length: %.1f\n", count / words);
	

	return 0;
}