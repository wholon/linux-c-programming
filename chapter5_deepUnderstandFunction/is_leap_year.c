#include <stdio.h>

/* is_leap_year: to judge is x is a leap year or not */

void is_leap_year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
		printf("%d is leap year\n", x);
	} else {
		printf("%d is not leap year\n", x);
	}
}

int main(void)
{
	int x = 2008; /* yes */
	int y = 2000; /* yes */
	int z = 1900; /* not */
	
	is_leap_year(x);
	is_leap_year(y);
	is_leap_year(z);

	return 0;	
}
	
