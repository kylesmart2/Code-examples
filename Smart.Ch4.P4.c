#include <stdio.h>

int main(void)
{
	int num, last, seclast, thdlast, fthlast, fflast;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	last = num % 8; /* Last digit */
	seclast = (num / 8) % 8; /* Second to last digit */
	thdlast = (num / 8 / 8) % 8; /* Third to last digit */
	fthlast = (num / 8 / 8 / 8) % 8; /* Fourth to last digit*/
	fflast = (num /8 /8 /8 /8) 	% 8; /* Fifth to last digit */

	printf("In octal, your number is %d%d%d%d%d\n", fflast, fthlast, thdlast, seclast, last);

	return 0;

}