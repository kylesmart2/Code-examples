#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, max, min;
	printf("Enter four integers: ");
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);


	if (num1 > num2)
		max = num1;
		min = num2;
	if (num1 < num2)
		max = num2;
		min = num1;
	if ((max > num3) && (num3 < min))
		min = num3;
	else if (max < num3)
		max = num3;
	if (num2 < min)
		min = num2;
	if ((max > num4) && (num4 < min))
		min = num4;
	else if (max < num4)
		max = num4;
	/*I can't figure out how to get it down to 4 if statements*/
	
	/*printf("%d\t%d\t%d\t%d\n", num1, num2, num3, num4);*/
	/*Test ^ */
	printf("The largest number is: %d\n", max);
	printf("The smallest number is: %d\n", min);

	return 0;


}