#include "processPayroll.h"

int main(void)
{
	char *s = (char *)malloc(100);
	size_t hour = 0;

	get_started();
	while (true)
	{
		scanf("%s", s);
		if (isdigit_s(s) == true)
			hour += atoi(s);
		else if (is_finished(s) == true)
			break;
		else
			continue;
	}
	free(s);
	put_result(&hour);
	//system("leaks a.out");
	return 0;
}
