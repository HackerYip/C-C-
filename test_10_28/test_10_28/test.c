#define _CRT_SECURE_NO_WARNINGS 1

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//
//	if (x < 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//
//	printf("%d\n", y);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int h = 0;//小时数
//	int m = 0;//分钟数
//	int s = 0;//秒数
//	int seconds = 0;
//	//输入
//	scanf("%d", &seconds);
//
//	//计算
//	h = seconds / 3600;
//	m = (seconds % 3600) / 60;
//	s = (seconds % 3600) % 60;
//
//	//输出
//	printf("%d %d %d", h, m, s);
//	return 0;
//}
//
//#include <stdio.h>
//
//
//int main()
//{
//	//输入
//	int data[5] = { 0 };
//	int  sum = 0;
//	int i = 0;
//	float avg = 0.0f;
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &data[i]);
//	}
//	//计算
//	for (i = 0; i < 5; i++)
//	{
//		sum += data[i];
//	}
//	avg = sum / 5.0;
//
//	//输出
//	printf("%.1f\n", avg);
//
//	return 0;
//}
//
//
//
///*
//int main()
//{
//	//输入
//	int score = 0;
//	int sum = 0;
//	int i = 0;
//	float avg = 0.0f;
//
//	for(i=0; i<5; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//	}
//	//计算
//	avg = sum/5.0;
//	//输出
//	printf("%.1f\n", avg);
//
//	return 0;
//}
//*/
//
//
//#include <stdio.h>
//
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//
//	scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
//	printf("%d%d%d%d", d, c, b, a);
//
//	return 0;
//}
//
//
///*
//int main()
//{
//	//输入
//	int n = 0;
//	scanf("%d", &n);//1234
//	//计算并输出
//	while(n)
//	{
//		printf("%d", n%10);//43
//		n = n/10;
//	}
//	return 0;
//}
//
//*/
//
//
//
////#include <stdio.h>
////int sum(int a)
////{
////    int c = 0;
////    static int b = 3;
////    c += 1;
////    b += 2;
////    return (a + b + c);
////}
////
////int main()
////{
////    int i;
////    int a = 2;
////    for (i = 0; i < 5; i++)
////    {
////        printf("%d,", sum(a));
////    }
////}
////
////int Add(int x, int y)
////{
////	//这里是要完成的代码
////}
////
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);
////	//
////	int ret = Add(a, b);
////
////	printf("%d\n", ret);
////
////	return 0;
////}
//
//#include <stdio.h>
//
////int main()
////{
////	float a = 5 / 2.0;
////	printf("%f\n", a);
////
////	return 0;
////}
//
////#include <stdio.h>
////
////int main()
////{
////    //输入
////    int n = 0;
////    scanf("%d", &n);//1234
////    //计算并输出
////    while (n)
////    {
////        printf("%d", n % 10);//43
////        n = n / 10;
////    }
////    return 0;
////}
//
////#include <stdio.h>
////
////int main()
////{
////	int i = 0;
////	for (i = 0; i < 10; i++)
////	{
////		if (i = 5)//这里是赋值不是判断
////			printf("%d ", i);//5
////	}
////	return 0;
////}
////
//
//
////int func(int a)
////{
////    int b;
////    switch (a)
////    {
////    case 1: b = 30;
////    case 2: b = 20;
////    case 3: b = 16;
////    default: b = 0;
////    }
////    return b;
////}
////则func(1) = （      ）
//
////
////char类型中放的是字符
////字符是有ASCII 码值的
////字符在存储的时候，存储的是ASCII码值
////
////
////#include <stdio.h>
////int main() {
////	int x = 3;
////	int y = 3;
////	switch (x % 2) {
////	case 1:
////		switch (y)
////		{
////		case 0:
////			printf("first");
////		case 1:
////			printf("second");
////			break;
////		default: printf("hello");
////		}
////
////	case 2:
////		printf("third");
////	}
////	//hellothird
////	return 0;
////}
////
////
//
//
////写代码将三个整数数按从大到小输出。
//
////
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////
////	//输入
////	scanf("%d %d %d", &a, &b, &c);//2 1 3
////	//计算
////	//最大值放在a中，最小值放在c中
////	//a和b的较大值放在a中
////	if (a < b)
////	{
////		int tmp = a;
////		a = b;
////		b = tmp;
////	}
////	//把a和c中的较大值放在a中
////	if (a < c)
////	{
////		int tmp = a;
////		a = c;
////		c = tmp;
////	}
////	//把b和c的较大值放在b中
////	if (b < c)
////	{
////		int tmp = b;
////		b = c;
////		c = tmp;
////	}
////
////	//输出
////	printf("%d %d %d\n", a, b, c);
////
////	return 0;
////}
////	
//
////int main()
////{
////	int i = 0;
////	//for (i = 1; i <= 100; i++)
////	//{
////	//	//判断i是否是3的倍数
////	//	if (i % 3 == 0)
////	//	{
////	//		printf("%d ", i);
////	//	}
////	//}
////
////	for (i = 3; i <= 100; i+=3)
////	{
////		printf("%d ", i);
////	}
////	return 0;
////}
////
////int main()
////{
////	int m = 0;
////	int n = 0;
////	scanf("%d %d", &m, &n);
////	//求最大公约数
////	int ret = 0;
////	//1. 求m和n 较小值，假设就是最大公约数
////	if (m > n)
////		ret = n;
////	else
////		ret = m;
////
////	while (1)
////	{
////		if (m % ret == 0 && n % ret == 0)
////		{
////			break;
////		}
////		ret--;
////	}
////	//打印
////	printf("%d\n", ret);
////
////	return 0;
////}
////
//
//
////int main()
////{
////	int m = 0;
////	int n = 0;
////	scanf("%d %d", &m, &n);//18 24
////	//求最大公约数
////	int ret = 0;
////	while (ret=m%n)
////	{
////		m = n;
////		n = ret;
////	}
////	printf("%d\n", n);
////
////	return 0;
////}
//
////闰年判断的规则
////1. 能被4整除，并且不能被100整除是闰年
////2. 能被400整除是闰年
////
////int main()
////{
////	int y = 0;
////	int count = 0;
////	for (y = 1000; y <= 2000; y++)
////	{
////		//判断y是不是闰年
////		//if (y % 4 == 0 && y % 100 != 0)
////		//{
////		//	count++;
////		//	printf("%d ", y);
////		//}
////		//if (y % 400 == 0)
////		//{
////		//	count++;
////		//	printf("%d ", y);
////		//}
////
////		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400==0))
////		{
////			count++;
////			printf("%d ", y);
////		}
////	}
////
////	//输出个数
////	printf("\ncount = %d\n", count);
////	return 0;
////}
////
//
//
//
////打印100~200之间的素数
////素数也是质数
////只能被1和他本身整除的数字就是素数
////7
////2 3 4 5 6
////
////int main()
////{
////	int y = 0;
////	for (y = 100; y <= 200; y++)
////	{
////		//判断y是不是素数
////		//拿2~y-1的数字去试除y就行
////		int n = 0;
////		int flag = 1;//假设y是素数
////		for (n = 2; n < y; n++)
////		{
////			if (y % n == 0)
////			{
////				flag = 0;//y不是素数
////				break;
////			}
////		}
////		if (flag == 1)
////			printf("%d ", y);
////	}
////	return 0;
////}
////
////#include <math.h>
////
////int main()
////{
////	int y = 0;
////	int count = 0;
////	for (y = 100; y <= 200; y++)
////	{
////		//判断y是不是素数
////		//拿2~y-1的数字去试除y就行
////		int n = 0;
////		int flag = 1;//假设y是素数
////		for (n = 2; n <= sqrt(y); n++)
////		{
////			if (y % n == 0)
////			{
////				flag = 0;//y不是素数
////				break;
////			}
////		}
////		if (flag == 1)
////		{
////			printf("%d ", y);
////			count++;
////		}
////		
////	}
////	printf("\ncount = %d\n", count);
////
////	return 0;
////}
////
//
//
//#include <math.h>
////
////int main()
////{
////	int y = 0;
////	int count = 0;
////	for (y = 101; y <= 200; y+=2)
////	{
////		//判断y是不是素数
////		//拿2~y-1的数字去试除y就行
////		int n = 0;
////		int flag = 1;//假设y是素数
////		for (n = 2; n <= sqrt(y); n++)
////		{
////			if (y % n == 0)
////			{
////				flag = 0;//y不是素数
////				break;
////			}
////		}
////		if (flag == 1)
////		{
////			printf("%d ", y);
////			count++;
////		}
////
////	}
////	printf("\ncount = %d\n", count);
////
////	return 0;
////}
//
////
////试除法
//// 素数求解的N种境界
////
//
//
////strcmp - string compare
////返回0，说明2个字符串相等
////返回大于0的数字
////返回小于0的数字
////
////#include <string.h>
////
////int main()
////{
////	int i = 0;
////	char password[20] = "";
////
////	//假设密码是"123456"
////	for (i = 0; i < 3; i++)
////	{
////		printf("请输入密码:>");
////		scanf("%s", password);//password不取地址的原因是password是数组名，数组名本来就是地址
////		if (strcmp(password, "123456") == 0)//比较2个字符串是否相等，不能使用==，而应该使用strcmp这个函数
////		{
////			printf("登陆成功\n");
////			break;
////		}
////		else
////		{
////			printf("密码错误\n");
////		}
////	}
////	if (i == 3)
////	{
////		printf("三次密码均错误，退出程序\n");
////	}
////
////
////	return 0;
////}
//
////猜数字游戏
//
////电脑随机生成一个1~100之间的数字
////猜数字
////玩家猜小了，电脑会告诉：猜小了
////玩家猜大了，电脑会告诉：猜大了
////玩家猜对了，电脑会告诉：恭喜你，猜对了
//
////C语言中生成的随机数的方式是rand函数
////0~RAND_MAX 0x7fff
////0~32767
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*****    1. play     ******\n");
//	printf("*****    0. exit     ******\n");
//	printf("***************************\n");
//}
//
//
//void game()
//{
//	int guess = 0;
//	//猜数字游戏的过程
//	//生成随机数
//	int r = rand() % 100 + 1;//0~99-->1~100
//	//猜数字
//	while (1)
//	{
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//时间-设置随机数的生成器
//
//	do
//	{
//		//打印菜单
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//
//




#include<stdio.h>

int main()
{
  int i = 0;
  int count = 0;
  for(i = 1; i <= 100 ; i ++ )
{
  if(i % 9 == 9 )
  { 
  count++;
   }
}
if(i / 10 == 9)
{
  count++;
}

printf("\ncount\n",count);

return 0;
}