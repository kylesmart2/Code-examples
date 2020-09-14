#include <stdio.h>
#include <ctype.h>
#define N 26

int main(void)
{
	int i, j, anagram;
	char ch1, ch2;
	int array[N]= {0};
	char array2[N] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

	printf("Enter first word: ");
	

	
	while ((ch1 = getchar()) != '\n')
	{
		for (i = 0; i < N; i++)
		{
			if (toupper(ch1) == array2[i])
				array[i] += 1;
			
		}
	}
	
	printf("Enter second word: ");

	while ((ch2 = getchar()) != '\n')
	{
		for (j = 0; j < N; j++)
		{
			if (toupper(ch2) == array2[j])
				array[j] -= 1;
		}
	}

	for (i = 0; i <= N; i++)
		if (array[i] == 0)
			anagram = 1;
		else
			anagram = 0;
	if (anagram == 1)
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");
	
	return 0;
}