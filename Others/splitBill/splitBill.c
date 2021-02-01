#include "splitBill.h"

int main(void)
{
	size_t personCount, itemCount, sum = 0;

	if (getStarted(&personCount, &itemCount) == SUC)
	{
		for (size_t i = 0; i < itemCount; i++)
			sum += askPrice(i);
		showResult(sum, personCount);
		return 0;
	}
	else
		tryAgain();
}
