#include <stdio.h>

int main(void)
{
	float commish, num;

 	printf("Enter value of trade: ");
 	scanf("%f", &vnum);

 	while (num != 0.0f) {
    	if (num < 2500.00f)
     		commish = 30.00f + .017f * num;
   		else if (num < 6250.00f)
     		commish = 56.00f + .0066f * num;
   		else if (num < 20000.00f)
     		commish = 76.00f + .0034f * num;
   		else if (num < 50000.00f)
    		commish = 100.00f + .0022f * num;
   		else if (num < 500000.00f)
    		commish = 155.00f + .0011f * num;
   		else
     		commish = 255.00f + .0009f * num;

   	if (commish < 39.00f)
     	commish = 39.00f;

   	printf("Commission: $%.2f\n\n", commish);

   	printf("Enter value of trade: ");
   	scanf("%f", &num);
  }

  return 0;

}