#include <stdio.h>

/* 打印钻石符号 */

void diamond(int x, char y)
{
	if (x % 2 == 0) {
		printf("Input Error\n");
		return;
	}
	int j;
	/* 打印前半部分 */
	for (j = 0; j <= x / 2; j++) {
		int in, is;
		/* 打印每行左边的空白 */
		for (in = (x - (1 + 2 * j)) / 2; in >= 1; in--) {
			printf("\t");				
		}
		/* 打印中间的字符 */
		for (is = 0; is < 1 + 2 * j; is++) {
			printf("%c\t", y);
		}
		/* 打印每行右边的空白 */
		for (in = (x - (1 + 2 * j)) / 2; in >= 1; in--) {
			printf("\t");
		}
		printf("\n");
	}
	/* 打印后半部分 */
	for (j = x / 2 - 1; j >= 0; j--) {
		int in, is;
		for (in = (x - (1 + 2 * j)) / 2; in >= 1; in--) {
			printf("\t");				
		}
		for (is = 0; is < 1 + 2 * j; is++) {
			printf("%c\t", y);
		}
		for (in = (x - (1 + 2 * j)) / 2; in >= 1; in--) {
			printf("\t");				
		}
		printf("\n");
	}
}

int main(void)
{
	diamond(3, '*');
	diamond(5, '+');
	diamond(4, '+');
	diamond(7, '#');
}
