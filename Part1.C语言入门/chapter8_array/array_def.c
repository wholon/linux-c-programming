#include <stdio.h>

/* 定义和访问一个数组 */

int main(void)
{
	int array[5] = {1,2,3,4}, i;

	for (i = 0; i < 5; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
}
