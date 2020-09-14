#include <stdio.h>
#define N 100

int main(void)
{
	char array[N], *p, ch, count, *i;

	printf("Please enter a sentence: ");
	for (p = &array[0]; p < &array[N]; p++)
	{	*p = getchar();
		if ((*p == '.') || (*p == '?') || (*p == '!'))
			ch = *p;
		else if (*p == '\n')
			break;
	}
	printf("Your sentence reversed is: ");
	
	while (p != &array[0])
	{	count = 0;
		for (p--; p >= &array[0]; p--)
			count += 1;
		{	if (*p == ' ')
			{	
				i = p;
				for (i++; i < &count; i++)
					putchar(*i);

			}
			
		}
	}
	printf("%c\n", ch);

	return 0;

}