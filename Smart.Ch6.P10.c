#include <stdio.h>

int main(void)
{
	int m1, d1, y1, m2, d2, y2, early, total;

	printf("Enter a date (mm/dd/yy) (0/0/0 to quit): ");
	scanf("%d/%d/%d", &m1, &d1, &y1);
	
	total = (m1 * 10) + d1 + (y1 * 32);
	early = total;

	while (total != 0)
	{	
		if (total <= early){
			m2 = m1;
			d2 = d1;
			y2 = y1;
			early = total;}
	

		printf("Enter a date (mm/dd/yy) (0/0/0 to quit): ");
		scanf("%d/%d/%d", &m1, &d1, &y1);
		total = (m1 * 10) + d1 + (y1 * 32);
	}

	printf("%d/%d/%.2d is the earliest date.\n", m2, d2, y2);

	return 0;
}
