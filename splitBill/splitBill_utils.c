#include "splitBill.h"

void tryAgain(void)
{
	printf("\x1b[31mInvalid value. Try again.\x1b[0m\n");
	main();
}

int getStarted(size_t *personCount, size_t *itemCount)
{
	int ret;

	printf("Input the number of people:\t");
	scanf("%zu", *&personCount);
	printf("Input the number of items:\t");
	scanf("%zu", *&itemCount);
	putLine();
	ret = (*personCount > 0 && *itemCount > 0) ? SUC : ERR;
	return (ret);
}

size_t askPrice(size_t i)
{
	size_t itemPrice;

	if (i + 1 == 1)
		printf("1st item:\t");
	else if (i + 1 == 2)
		printf("2nd item:\t");
	else if (i + 1 == 3)
		printf("3rd item:\t");
	else
		printf("%zuth item:\t", i + 1);
	scanf("%zu", &itemPrice);
	return itemPrice;
}

void putLine(void)
{
	printf("\n>>>>>\n");
}

void showResult(size_t sum, size_t personCount)
{
	putLine();
	printf("Sum:\t\t%zu\n", sum);
	printf("Payment p.p.:\t%zu", sum / personCount);
}
