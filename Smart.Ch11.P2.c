#include <stdio.h>
#include <stdbool.h>
#define N 10

void sort_array(int *a, int b);

int main(void)
{
	int i, array[N] = {0};

	printf("Please enter %d integers: ", N);
	for (i=0; i < N; i++)
		scanf("%d", &array[i]);
	
	sort_array(array, N);

	for (i = 0; i < N; i++)
		printf("%d ", array[i]);
	printf("\n");

	return 0;
}
void sort_array(int *a, int b)
{
	bool swapped = true;
	int temp, i, j = 0;

	while (swapped)
	{
		swapped = false;
		j++;
		for (i = 0; i < b - j; i++)
		{
			if (a[i] > a[1 + i])
			{
				temp = a[i];
				a[i] = a[i +1];
				a[i + 1] = temp;
				swapped = true;
			}
		}

	}
}