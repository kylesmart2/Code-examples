#include <stdio.h>
#define N 100

int main(void)
{
	char array[N], *p;
	

	printf("Please enter a message: ");
	for (p = &array[0]; p < &array[N]; p++)
	{
		*p = getchar();
		if (*p == '\n')
			break;
	}
		

	printf("The reversal of your message is: ");
	for (p--; p >= &array[0]; p--)
		putchar(*p);

	printf("\n");
	return 0;
}