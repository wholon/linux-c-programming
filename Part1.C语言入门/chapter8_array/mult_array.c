#include <stdio.h>

/* 用多维数组来表示星期 */
void print_day(int n)
{
	char day[8][10] = {
		"",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};

	if (n < 1 || n > 7) {
		printf("Please Input valid number!");
	} else {
		printf("%s\n", day[n]);
	}
}

int main(void)
{
	print_day(2);

	return 0;

}
