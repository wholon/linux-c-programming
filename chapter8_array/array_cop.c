#include <stdio.h>

/* 把一个数组的内容拷贝给另一个 */

int main(void)
{
	int array1[5] = {1,2,3,4},i;
	int array2[5];
	for (i = 0; i < 5; i++) {
		array2[i] = array1[i];
	}

	for (i = 0; i < 5; i++) {
		printf("array2[%d] = %d\n", i, array2[i]);
	}
}
