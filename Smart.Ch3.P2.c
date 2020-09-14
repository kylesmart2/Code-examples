#include <stdio.h>

int main(void)
{
	int itemnum, m, d, y;
	float price;

	printf("Enter item number: ");
	scanf("%d", &itemnum); 
	/*pulling in decinmal for item number*/
	printf("Enter unit price: ");
	scanf("%f", &price);
	 /*Getting float number to be used with price*/
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y); 
	/*getting date / tells %d when to stop*/

	printf("Item 		Unit 		Purchase\n");
	printf(" 		Price 		Date \n");
	printf("%d 		$%4.2f 		%.2d/%.2d/%.4d \n", itemnum, price, m, d, y);
	/*Not sure if this^ is correct, but it's not showing properly*/

}