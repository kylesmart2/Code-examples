#include <stdio.h>

#define PI 3.14159

int main(void)
{
	float area;
	printf("This program will show you the volume of a sphere with a 10 meter raidius. \n");
	area = 4.0f/3.0f*PI*10*10*10;
	printf("The volume of a sphere with a raduis of 10 meters is: %.2f", area);
	printf(" meters");
	printf("\n");
	return 0;

}