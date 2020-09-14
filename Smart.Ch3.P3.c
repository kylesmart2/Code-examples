#include <stdio.h>

int main(void)
{
	int GS1, ident, pubcode, itnum, ckdigi;

	printf("Enter ISBN number (***-*-***-*****-*): ");
	scanf("%d-%d-%d-%d-%d", &GS1, &ident, &pubcode, &itnum, &ckdigi);

	printf("GS1 prefix: %d\n", GS1);
	printf("Group identifier: %d\n", ident);
	printf("Publisher code: %d\n", pubcode);
	printf("Item number: %d\n", itnum);
	printf("Check digit: %d\n", ckdigi);
	return 0;

}