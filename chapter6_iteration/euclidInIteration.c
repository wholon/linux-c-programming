#include <stdio.h>

/* 使用循环完成求最大公约数 */

int euclidInIteration(int x, int y)
{
	int divisor = x % y;
	while(divisor != 0){
		x = y;
		y = divisor;
		divisor = x % y;
	}

	return y;
}

int main(void)
{
	int x = 10;
	int y = 4;

	int result = euclidInIteration(x, y);

	printf("The Greatest Common Divisor of %d and %d is %d\n", x, y, result);

	return 0;
}

