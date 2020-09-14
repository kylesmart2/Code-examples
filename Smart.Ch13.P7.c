#include <stdio.h>
#define N 10

int main(void)
{
	int d1, d2;
	char *array1[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
							"sixteen", "seventeen", "eighteen", "nineteen"};
	char *array2[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy",
							"eighty", "ninety"};
	char *array3[] = {"-one", "-two", "-three", "-four", "-five", "-six", "-seven",
							"-eight", "-nine"};

	printf("Enter a two digit number: ");
	scanf("%1d%1d", &d1, &d2);
	/*while (d1 != 'q')			/******** Did loop for testing, causes infinite loop if you 
								 hit q.  ********/
	/*{    */
		printf("You entered the number ");
	
		if (d1 == 1)
			printf("%s.\n", array1[d2]);
		if ((d1 > 1) && (d2 == 0))
			printf("%s\n", array2[d1-2]);

		else if (d1 > 1)
			printf("%s%s.\n", array2[d1-2], array3[d2-1]);
	/*	printf("Enter a two digit number: ");
		scanf("%1d%1d", &d1, &d2);
	}		*/
	return 0;
}