#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* 一个剪刀石头布的小游戏 */


int main(void)
{
	int com, man, ret, result;
	char gesture[3][10] = {
		"scissor", "stone", "cloth"
	};
	
	srand(time(NULL));
	while (1) {
		com = rand() % 3;
		printf("Please input your gesture (0-sccissor,"
			" 1-stone, 2-cloth):\n");
		ret = scanf("%d", &man);

		if (ret != 1 /* 成功拿到一个整数 */ 
				|| man < 0 || man > 2) {
			printf("Please input valid number(0-2)!\n");
			continue;
		}

		printf("Your gesture: %s\tComputer's gesture: %s\n",
			gesture[man], gesture[com]);

		result = (man - com + 4) % 3 - 1;

		if (result > 0) {
			printf("You win!\n");
		} else if (result == 0) {
			printf("Draw!\n");
		} else {
			printf("You lose!\n");
		}
	}
}
