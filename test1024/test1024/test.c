#define _CRT_SECURE_NO_WARNINGS 1

//
//int Add(int x, int y)
//{
//	int z = 0;
//}
//
//int main()
//{
//	int a = 0;
//
//	return 0;
//}

//#include <stdio.h>

//int num = 10;
//
//int main()
//{
//    int num = 1;
//
//    printf("num = %d\n", num);//局部优先
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>

//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//
//    printf("%d\n", strlen(arr));
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}



//
//#include <stdio.h>
//
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//
//    return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[];//err
//
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int arr[n] = {0};
//	return 0;
//}

//写一个函数求两个整数的较大值
//
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int max = 0;
//
//	//输入
//	scanf("%d %d", &n1, &n2);
//
//	//求较大值
//	// //1
//	//if (n1 > n2)
//	//	max = n1;
//	//else
//	//	max = n2;
//	// 2
//	//max = (n1 > n2 ? n1 : n2);
//
//	//3
//	max = Max(n1, n2);
//	//打印
//	printf("%d\n", max);
//
//	return 0;
//}


//void 在这里表示不需要函数返回任何值
//void test()
//{
//	//a本来是局部变量的
//	//使用static修饰局部变量
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//如果想使用来自其他文件（外部文件）的	全局变量，先要声明一下
//extern是一个关键字，是专门用来声明外部符号的

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}



////声明外部函数
//extern  int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//#define 定义标识符常量

//#define M 100
//#define STR "hehe"
//
//int main()
//{
//	printf("%d\n", M);
//	printf("%s\n", STR);
//
//	return 0;
//}
//


//#define 定义宏

//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = ADD(a, b);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//    //& 取地址操作符
//    //%p - 是以地址的形式打印
//
//    int a = 10;//a要在内存中开辟空间的
//    printf("%p\n", &a);
//
//    int* p = &a;//p就是指针变量
//
//    *p = 20;//* --> 解引用操作符号
//
//    printf("%d\n", a);//20

    //char ch = 'w';
    //char * pc = &ch;

 /*   return 0;
}*/


//
//地址
//地址是放在指针变量中
//
//
//
//#include <stdio.h>

/*
int main()
{
    printf("     **\n");
    printf("     **\n");
    printf("************\n");
    printf("************\n");
    printf("    *  *\n");
    printf("    *  *\n");

    return 0;
}

*/
/*
int main()
{
    printf("     **     \n");
    printf("     **     \n");
    printf("************\n");
    printf("************\n");
    printf("    *  *    \n");
    printf("    *  *    \n");

    return 0;
}
*/








//
//#include <stdio.h>
//
//int main()
//{
//    //输入
//    int n = 0;
//    scanf("%d", &n);
//
//    //判断和打印
//    //   /  除号
//    //   % - 取模
//    //n%5 计算的是n除以5 后的余数
//
//    if (n % 5 == 0)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("I lost my cellphone!\n");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    //输入
//    scanf("%d %d", &a, &b);
//    if (a >= 0 && a < 10000 && b>0 && b < 10000)
//    {
//        int c = a / b;
//        int d = a % b;
//        //计算并打印
//        printf("%d %d\n", c, d);
//    }
//    return 0;
//}




//全局变量
//int g_val = 2021;

//如果static修饰全局变量呢？

//static int g_val = 2021;

//定义Add函数

//static int Add(int x, int y)
//{
//    return x + y;
//}

//函数也是具有外部链接属性的





//#include<stdio.h>
//int main()
//{
//    int x, y;
//    scanf("%d", &x);
//    if (x < 0)
//        y = 1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = -1;
//    printf("%d\n", y);
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int h = 0, min = 0, s = 0;
//    scanf("%d", &s);
//
//
//    h = (s / 3600);
//    min = (s % 3600) / 60;
//    s = (s % 3600) % 60;
//
//
//    printf("%d %d %d", h, min, s);
//    return 0;
//}


#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    float p = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    p = (a + b + c + d + e) / 5.0;
    printf("%.1f", p);
    return 0;
}