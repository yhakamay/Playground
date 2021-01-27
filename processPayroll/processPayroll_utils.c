#include "processPayroll.h"

bool isdigit_s(char *s)
{
	for (size_t i = 0; s[i] != '\0'; i++)
		if (!isdigit(s[i]))
			return false;
	return true;
}

bool is_finished(char *s)
{
	return (s[0] == 'F' && s[1] == 'F');
}

void get_started(void)
{
	puts("Please input the hours you worked.\n");
	puts("If you want to finish, input \"FF\".");
	puts(LINE);
}

void put_result(size_t *hour)
{
	size_t money;

	money = (double)((*hour + ADD_HOUR) * PER_HOUR) * (1 + TAX);
	puts(LINE);
	printf("Time you worked:\t%zu hours\n", *hour);
	printf("Additional time:\t%d hours\n", ADD_HOUR);
	printf("Wages (tax included):\t\x1b[1m\x1b[36m%zu JPY\n", money);
}
