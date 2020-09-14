#include <stdio.h>

int main(void)
{

	int a, b, c;
        printf("Enter a three-digit number: ");
        scanf("%1d%1d%1d",&a, &b, &c);

        /* I definitely prefer this method of reversing the order*/

        printf("The reversal is: %d%d%d\n", c, b, a);

        return 0;
}
