#include <stdio.h>

#define N 5

int main(void)
{
	int array[N][N] = {0}, row = 0, col = 0;
	int i, j, count = 0;

   /*This took me longer than I'd like to admit to figure out*/
		
	for (i = count; i < N; i++)
	{	printf("Enter 5 numbers for row %d: ", i);
		for (j = count; j < N; j++)
		{	
			scanf("%d", &array[i][j]);
		}
	}
	
	printf("\n");
	printf("Row totals:\t");
	for (i = 0; i < N; i++)
	{	row = 0;
		for (j = 0; j < N; j++)
		{
			row = row + array[i][j];
		}	printf(" %d", row);

	}
	printf("\n");
	printf("Column totals:\t");
	for (j = 0; j < N; j++)
	{	col = 0;
		for (i = 0; i < N; i++)
		{
			col = col + array[i][j];
		}	printf(" %d", col);

	}

	printf("\n");

	return 0;
}