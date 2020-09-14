#include <stdio.h>

int main(void)
{
	float speed;

	printf("Enter wind speed in knots: ");
	scanf("%f", &speed);

	if (speed < 1)
		printf("The wind is calm.\n");
	else if (speed <= 3)
		printf("The wind is light air.\n");
	else if (speed <= 27)
		printf("The wind is a breeze.\n");
	else if (speed <= 47)
		printf("The wind is a gale.\n ");
	else if (speed <= 63)
		printf("The wind is a storm.\n");
	else 
		printf("The wind is a hurricane.\n");

	return 0;
}