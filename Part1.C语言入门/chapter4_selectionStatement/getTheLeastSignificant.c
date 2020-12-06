#include<stdio.h>

/* 取整数个位和十位的值 */

void getGe(int x)
{
	int ge = x % 10;
	printf("The ge number is %d\n", ge);
}

void getTen(int x)
{
	int ten = (x % 100) % 10;
	printf("The ten number is %d\n", ten);
}

int main(void)
{
	int x = 10;
	int y = 412;
	getGe(x);
	getTen(y);

	return 0;
}
