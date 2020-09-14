#include <stdio.h>

int main(void)
{

	int a, remainder;

	printf("Enter a number to view its reversal: ");
	scanf("%d", &a);

	printf("The reversal is: ");

	do 
	{
		remainder = a % 10;
    	printf("%d", remainder);
     
    	a /= 10; 

    } while (a != 0);

    	printf("\n");

	
	return 0;
}