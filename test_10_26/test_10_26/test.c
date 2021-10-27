#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//getchar
//getchar读取失败的时候返回EOF
//int main()
//{
//	//scanf()
//	int ch = getchar();//'a' - 97
//
//	//printf("%c\n", ch);
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//
//int main()
//{
//	char input[20] = {0};
//
//	printf("请输入密码:>");
//	scanf("%s", input);//abcdef
//	
//	//getchar();//拿走\n
//
//	//清理缓冲区
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;//空语句
//	}
//
//	printf("请确认密码(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	if (ch < '0' || ch>'9')
//	//		continue;
//
//	//	putchar(ch);
//	//}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整部分
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		i = 0;//不好的习惯
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//1. for的初始化，判断，调整三个部分都可以省略
//	//2. 中间的判断部分如果省略，意味着判断恒为真，就构成了死循环
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//如果条件允许，不建议省略for循环的3个表达式
//	
//	//int i = 0;
//	//int j = 0;
//
//	//for (; i < 3; i++)
//	//{
//	//	for (; j < 3; j++)
//	//	{
//	//		printf("hehe\n");
//	//	}
//	//}
//
//	//使用do.while打印1~10
//	int i = 1;
//
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);//5
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1+2+6 = 9
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		//ret*1
//		//ret*1*2
//		//ret*1*2*3
//		//ret*1*2*3*4
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//
	//int main()
	//{
	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//			 //40        /  4   =10
	//	int k = 7;
	//	int left = 0;
	//	int right = sz - 1;

	//	while (left<=right)
	//	{
	//		int mid = (left + right) / 2;
	//		if (arr[mid] < k)
	//		{
	//			left = mid + 1;
	//		}
	//		else if (arr[mid] > k)
	//		{
	//			right = mid - 1;
	//		}
	//		else
	//		{
	//			printf("找到了，下标是:%d\n", mid);
	//			break;
	//		}
	//	}
	//	//
	//	if (left > right)
	//	{
	//		printf("找不到\n");
	//	}

	//	return 0;
	//}

//
//hello bit!!!!!!!
//################
//h##############!
//he############!!
//hel##########!!!
//....
//hello bit!!!!!!!
//
//#include <string.h>
//#
//int main()
//{
//	char arr[] = "abc";
//	//[a b c \0]
//	// 0 1 2
//	char arr1[] = "hello bit!!!!!!!";
//	char arr2[] = "################";
//	//            "h##############!";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠函数-单位是毫秒
//		system("cls");//执行系统命令的
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}include <windows.h>



//int main()
//{
//	int arr[] = { 11,12,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//40        /  4   =10
//	int k = 15;
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	//
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}



#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0;
	int MAX = 0;            
	int arr[11] = { 0 };      
	
	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	MAX = arr[1];
	for (i = 2; i <= 10; i++)
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
	}
	printf("最大的数为：%d", MAX);
	return 0;
}
