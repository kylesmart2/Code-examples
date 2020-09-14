#include <stdio.h>

int main(void)
{
	int m1, d1, y1, m2, d2, y2;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1, &d1, &y1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m2, &d2, &y2);

	if (y1<y2)
		printf("%d/%d/%.2d comes before %d/%d/%.2d\n", m1,d1,y1,m2,d2,y2);
	/*If year1 is less than year 2, then it prints directly*/
	else if ((m1<=m2) && (y1<=y2) && (d1<d2))
		printf("%d/%d/%.2d comes before %d/%d/%.2d\n", m1,d1,y1,m2,d2,y2);
	/*If month and year are the same, the day is the deciding factor*/
	/*Also still deciding if month 1 is bigger or smaller than month 2 */
	else 
		printf("%d/%d/%.2d comes before %d/%d/%.2d\n", m2,d2,y2,m1,d1,y1);
	/*All deciding factors have already gone through, determining the latter*/

	return 0;
}