#include <stdio.h>

int main(void)
{
	int area, prefix, end;

	printf("Enter phone number[ (xxx) xxx-xxxx]: ");
	scanf("%d%-d%d", &area, &prefix, &end);
	

	printf("You entered %d.%d.%d ", area,prefix, end);

	return 0;
}