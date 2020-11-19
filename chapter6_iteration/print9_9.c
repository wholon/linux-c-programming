#include <stdio.h>

/* 打印九九乘法表 */

int main(void)
{
	int i, j;
	for (i = 1; i < 10; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d * %d = %d\t", i, j, j * i);
		}

		printf("\n");
	}
}
