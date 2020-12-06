#include <stdio.h>

/* euclid: 计算最大公约数 */

/* euclid: 递归算法计算两数的最大公约数 */
int euclid(int x, int y)
{
	if (x % y == 0) {
		return y;
	} else {
		return euclid(y, x % y);
	}
}

int main(void)
{
	int x = 10;
	int y = 4;

	int result = euclid(x, y);

	printf("The greatest common divisor of %d and %d is %d\n", x, y, result);

	return 0;
}
