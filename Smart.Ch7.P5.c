#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int total;

	printf("Enter a word: ");

	total = 0;

	while ((ch = getchar()) != '\n')
	{
		switch (toupper(ch))
		{
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
			case 'R': case 'S': case 'T': case 'U': total += 1;
			break;
			
			case 'D': case 'G': total += 2;
			break;

			case 'B': case 'C': case 'M': case 'P': total += 3;
			break;			

			case 'F': case 'H': case 'V': case 'W': case 'Y': total += 4;
			break;

			case 'K': total += 5;
			break;

			case 'J': case 'X': total += 8;
			break;

			case 'Q': case 'Z': total += 10;
			break;

		}
	}
	printf("Scrabble total: %d\n", total);

	return 0;
}