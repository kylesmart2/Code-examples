#include <stdio.h>
#include <ctype.h>


int main(void)
{
	int hour, minute;
	char ch, AM, PM;

	printf("Enter a 12 hour time (H:MM AM/PM) ");
	scanf("%d:%2d %c", &hour, &minute, &ch);
	
		
		if (toupper(ch) == 'P')
			PM = 1;	
		else if (toupper(ch) == 'A')
			AM = 1;
	
	printf("Equivalent 24-hour time: ");

	if (AM == 1 && hour < 10)
		printf("0%d:%.2d\n", hour, minute);
	else if (AM == 1 && hour == 12)
		printf("%d:%.2d\n", hour + 12, minute);
	else if (AM == 1)
		printf("%d:%.2d\n", hour, minute);
	else if (PM == 1 && hour < 12)
		printf("%d:%.2d\n", hour + 12, minute);
	else
		printf("%d:%.2d\n", hour, minute);
	
	

	return 0;

}