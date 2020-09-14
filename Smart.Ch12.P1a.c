#include <stdio.h>
#define N 100


int main(void)
{
	char array[N];
	int i;

	printf("Please enter a message: ");
	for (i = 0; i < N; i++)
	{
		array[i] = getchar();
		if (array[i] == '\n')
			break;
	}
		

	printf("The reversal of your message is: ");
	for (i--; i > -1; i--)
		printf("%c", array[i]);

	printf("\n");
	return 0;
}