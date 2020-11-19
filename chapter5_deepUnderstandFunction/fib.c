#include <stdio.h>

/* 计算斐波那契数列 */

/* 斐波那契数列 */
int fib(int n)
{
	if (n == 0 || n == 1){
		return 1;
	} else {
		return fib(n-1) + fib(n-2);
	}
}

int main(void)
{
	int n = 6;
	int result = fib(n);

	printf("%d's fib is %d\n", n, result);

	return 0;
}
