#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int count1[26], int count2[26]);

int main(void)
{
	
	int count1[26] = {0}, count2[26]= {0}, anagram;

	printf("Enter first word: ");
	read_word(count1);

	printf("Enter second word: ");
	read_word(count2);
	anagram = equal_array(count1, count2);

	if (anagram == 1)
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");
	
	return 0;
}
void read_word(int counts[26])
{
	char ch1, ch2;
	int i, N = 26;
	char array2[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

	while ((ch1 = getchar()) != '\n')
	{
		for (i = 0; i < N; i++)
		{
			if (toupper(ch1) == array2[i])
				counts[i] += 1;
			
		}
	}
}
bool equal_array(int count1[26], int count2[26])
{
	int i, anagram;
	for (i = 0; i < 26; i++)
		if ((count1[i] == 0) && count2[i] == 0)
			return 1;
		else
			return 0;

}







