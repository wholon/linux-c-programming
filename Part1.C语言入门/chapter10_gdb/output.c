#include <stdio.h>

/* 接收一串输入并打印出来 */

int main(void)
{
	int i, sum = 0;
	char input[5];
	while (1) {
		scanf("%s", input);
		sum = 0;
		for (i = 0; input[i] != '\0'; i++) {
			sum = sum * 10 + input[i] - '0';
		}

		printf("input = %d\n", sum);
	}

	return 0;
}
