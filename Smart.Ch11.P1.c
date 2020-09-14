#include <stdio.h>
#include <ctype.h>

void swap_em(int *a, int *b);


int main(void)
{
	int num1, num2;
	char choice = 'y';
	
	while (toupper(choice) != 'N')
	{
		printf("Please enter two numbers seperated by a space: ");
		scanf("%d%d", &num1, &num2);
		swap_em(&num1, &num2);

		printf("Your numbers switched around: %d, %d\n", num1, num2);

		printf("Would you like to swap your numbers again (y/n): ");
		scanf("%s", &choice);
		if (toupper(choice) == 'Y')
			swap_em(&num1, &num2);

	}
	
	return 0;
}
void swap_em(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;


}