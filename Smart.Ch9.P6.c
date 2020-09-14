#include <stdio.h>

int function(int num);

int main(void)
{
	int num;

	printf("Enter a value for x: ");
	scanf("%d", &num);
	printf("The answer to the polynomial is %d\n", function(num));

}
int function(num)
{

	return 3*(num*num*num*num*num)+2*(num*num*num*num)-5*(num*num*num)
	-(num*num)+7*num-6; 
}
