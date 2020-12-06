#include <stdio.h>

/* 用循环实现斐波那契数列数列 */

int fibInIteration(int x)
{
	int result = 0;

	int a = 1, b = 1, n = 2;
	while (n <= x) {
		result = a + b;
		a = b;
		b = result;
		n = n + 1;
	}

	return result;
}

int main(void)
{
	int x = 10;

	int result = fibInIteration(x);
	
	printf("The %d's fib is %d\n", x, result);
}
