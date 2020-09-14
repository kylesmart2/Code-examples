#include <stdio.h>
#include <string.h>
#define N 20

void read_line(char word[], int m);

int main(void)
{
	char smallest_string[N + 1], largest_string[N + 1], current[N + 1], 
		  next_largest[N + 1];
	
	printf("Enter a word: ");
	read_line(current, N);
	strcpy(smallest_string, strcpy(largest_string, current));
	strcpy(next_largest, current);

	printf("Enter a word: ");
	read_line(current, N);

	while (strlen(current) != 4)
	{
		
		if (strcmp(current, smallest_string) < 0)
			strcpy(smallest_string, current);

		if (strcmp(current, largest_string) > 0)
			strcpy(next_largest, largest_string);

		if (strcmp(current, largest_string) > 0)
			strcpy(largest_string, current);

		

		

		

		printf("Enter a word: ");
		read_line(current, N);
		
	}

	printf("The largest word is: %s\n", largest_string);
	printf("The next largest word is: %s\n", next_largest);
	printf("The smallest word is: %s\n", smallest_string);
	
	return 0;
}
void read_line(char word[N], int m)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
	
		if (i < m)
			word[i++] = ch;
	
	word[i] = '\0';
	
}


