#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//next:
//	printf("hehe\n");
//	printf("haha\n");
//	goto next;
//
//	return 0;
//}

//写一个关机程序
//只要程序启动了，就倒计时60秒关机，如果60秒内，你输入：我是猪，就取消关机，如果不输入，时间到关机.
//
//shutdown windows提供的关机命令
//shutdown -s -t 60
////system() - 库函数-执行系统命令

#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	//判断
//	if (strcmp(input, "我是猪") == 0)
//	{
//		//取消关机
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		//判断
//		if (strcmp(input, "我是猪") == 0)
//		{
//			//取消关机
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "abc";
//	//size_t -> unsigned int 
//	size_t len = strlen(arr);
//	printf("%u\n", len);
//	//%d - 有符号
//	//%u - 无符号
//	return 0;
//}

#include <string.h>

//int main()
//{
//	char arr1[20] = { 0 };//目的地
//	char arr2[] = "HELLO";//源数据
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abc";
//	size_t len = strlen(arr);
//	printf("%u\n", len);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	z = (x > y ? x : y);
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//scanf("%d %d", &a, &b);
//	int m = get_max(10+22, get_max(5, 40));//变量,常量，表达式,函数
//
//	printf("%d\n", m);
//
//	return 0;
//}
//
//void menu()
//{
//	printf("******   1. play   *****\n");
//	printf("******   0. exit   *****\n");
//}
//
//
//int main()
//{
//	menu();
//
//	return 0;
//}
// 
//写一个函数可以交换两个整形变量的内容
//
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int get_max(int x, int y)
//{
//	int z = 0;
//	z = (x > y ? x : y);
//	return z;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = get_max(a, b);

//	//交换2个变量
//	printf("交换前:a=%d b=%d\n", a, b);
////	Swap1(a, b);//传值调用
//	Swap2(&a, &b);//传址调用
//
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//当函数调用的时候，实参传给形参，形参其实是实参的一份临时拷贝
//所以对形参的修改，不会影响实参

//int main()
//{
//	int a = 10;
//	//a = 20;
//	int* pa = &a;
//
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//写一个函数可以判断一个数是不是素数。
//is_prime()
//是素数返回1，不是素数返回0

//int is_prime(int n)
//{
//	//2~n-1的数字试除
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;//素数
//}
//
//#include <math.h>
//
//int is_prime(int n)
//{
//	//2~n-1的数字试除
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;//素数
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数 - 如果是素数就打印i
//		if (is_prime(i)==1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//写一个函数判断一年是不是闰年
//是闰年返回1， 不是闰年返回0
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//写一个函数，实现一个整形有序数组的二分查找。
//找到了就返回下标
//找不到返回-1
// 
//int binary_search(int *arr, int k)
//
//int binary_search(int arr[], int k, int sz)
//{
//	//                 4  /4
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
//			return mid;
//		}
//	}
//
//	return -1;//就是找不到了
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//数组arr传给binary_search函数的时候，其实传递的是arr数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//
//int is_prime(int y)
//{
//int n = 0;
//for( n=2; n <= sqrt(y); n++)
//  {
//  if(y % n == 0)//不是素数返回0
//    {
//  return 0;
//
//    }
//  else//是素数返回1
//   {
//   return 1;
//  
//    }
//  }
//}
//
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for (y = 100; y <= 200; y++)
//    {
//        //判断
//        if (is_prime(y) == 1)
//        count++;
//        {
//            printf("%d ", y);
//        }
//    }
//    printf("\ncount = %d \n",count);
//    return 0;
//}

#include<stdio.h>


int is_leap_year( int y)
{
  if(((y % 4 == 0)&&(y % 100!= 0))||(y % 400 == 0))
    return  1;

  else
    return 0;
}



int main()
{
    int y = 0;
    int count = 0;
    for( y = 1000; y <= 2000; y++)
    {
       if(is_leap_year(y) == 1)
       { 
        count++;
        printf("%d ",y);

        }
     }
  printf("\ncount = %d \n",count);
  return 0;
}



