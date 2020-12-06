#include <stdio.h>

/* 输出1-100的素数 */

int is_prime(int x) {
	int i;
	if (x ==1) {
		return 0;
	}

	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++) {
		if (is_prime(i)) {
			printf("%d ", i);
		}
	}
}
