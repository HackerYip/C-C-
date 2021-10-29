#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏

//电脑随机生成一个0~32767之间的数字
//猜数字
//玩家猜小了，电脑会告诉：猜小了
//玩家猜大了，电脑会告诉：猜大了
//玩家猜对了，电脑会告诉：恭喜你，猜对了

//C语言中生成的随机数的方式是rand函数
//0~RAND_MAX 0x7fff
//0~32767
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void menu()
{
	printf("***************************\n");
	printf("*****    1. play     ******\n");
	printf("*****    0. exit     ******\n");
	printf("***************************\n");
}


void game()
{
	int guess = 0;
	//猜数字游戏的过程
	//生成随机数
	int r = rand();
	//猜数字
	while (1)
	{
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间-设置随机数的生成器

	do
	{
		//打印菜单
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}
