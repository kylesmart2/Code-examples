#include <stdio.h>
#include <ctype.h>
#define N 2
#define M 26

int main(void)
{
	char ch;
	int total, i, j;
	int letters[N][M] = {{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
		{1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10}};

	printf("Enter a word: ");
	

	total = 0;
	
	while ((ch = getchar()) != '\n')
	{
		for (i = 0; i < N; i++)
		{
			for (j=0; j < M; j++)
			{	if (toupper(ch) == letters[i][j])
					total += letters[i+1][j];
			}
		}
	}
	printf("The total of your word is: %d\n", total);

	return 0;
}