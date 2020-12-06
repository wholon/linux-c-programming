#include <stdio.h>

/* 通过堆栈倒叙打印数组 */
char stack[512];
int top = 0;

void push(char c)
{
	stack[top++] = c;
}

char pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}



int main(void)
{
	push('a');
	push('b');
	push('c');

	while (!is_empty()) {
		putchar(pop());
	}
	printf("\n");

	return 0;
}
