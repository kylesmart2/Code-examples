#include <stdio.h>

#define PI 3.14159

int main(void)
{
	int radius;
	printf("Please enter a value for the raduis: ");
	/*If it doesn't leave a space, put ^ after colon*/
	scanf("%d", &radius);
	area = PI*radius*radius;
	printf("The area of your circle is: %.2f", area);
	printf("\n");
	return 0;
}