#include <stdio.h>
#define RECTANGULAR 1
#define POLAR 2
/* 区分define和enum 
 * define: 预处理指令，在预处理时替换定义的宏
 * enum：编译阶段处理
 * */

int main(void)
{
	int RECTANGULAR;
	printf("%d %d\n", RECTANGULAR, POLAR);

	return 0;
}
