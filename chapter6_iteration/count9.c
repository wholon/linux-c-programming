#include<stdio.h>

/* 计算1-100中出现了多少次数字9 */

int main(void)
{
	int count = 0;

	int i = 1;
	while (i < 100) {

		if(i % 10 == 9 || (i % 100) / 10 == 9){
			count = count + 1;
		}

		i = i + 1;
	}

	printf("1-100 共有 %d 个9\n", count);

	return 0;
}
