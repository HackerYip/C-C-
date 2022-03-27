#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int a = 10;
//    int* p = &a;
//    
//    int* p = NULL;
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//
//
//int count_number_of_1(unsigned int m)
//{
//	int c = 0;//用来从函数返回，计算补码中一共有多少个1

//	while(m)//第一种方法
//	{
//		if(m % 2 == 1)
//		{
//			c++;
//		}
//			m /= 2;
//	}
//		return c;
//}

//	int i = 0;//第二种方法
//	for(i=0; i<32; i++)
//	{
//		if((m & 1) == 1)
//		{
//			c++;
//		}
//		m >= 1;
//		return c;
//	}
//}

// 
// 
// 
// 
// 第三种方法
// 例如 m = 15
// m = m & (m - 1)
// 
// 001111 - m
// 001110 - m -1 
// 上面两个按位与后结果是
//
// 001110 - m
// 再减一
// 
// 001101 - m - 1
// 再按位与
// 001100 - m
// 
// 所以m = m & (m - 1)这个表达式会把m的二进制序列中最右边的1去掉
// 
// 所以执行多少次这个表达式就是有多少个1
// 
// 
//  
//	
//
//	while (m)
//	{
//		m = m & (m - 1);
//		c++;//计数器
//	}
//		return c;
//}
//
//
//
//int main()
//{
//	int n = 15;//n放在内存的补码二进制中1的个数
//	int ret = count_number_of_1(n);
//	printf("%d", ret);
//
//	return 0;
//}


//int	count_diff_bit(int m, int n)//第一种方法，最直接的
//{
//	int i = 0;
//	int c = 0;//计数器
//	for(i=0; i<32; i++)
//	{
//		if((m & 1) != (n & 1))//数的是不同位的个数
//		{
//			c++;
//		}
//		m >>= 1;
//		n >>= 1; 
//	}
//		return c;
//}


//int	count_diff_bit(int m, int n)//第2种方法，异或，相同为0，相异为1
//{
//	int i = 0;
//	int c = 0;//计数器
//	int tmp = m ^ n;//把这俩异或后的二进制中有多少个1 算出来，因为相异为1
//	
//	while(tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		c++;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int ret = count_diff_bit(m, n);
//	printf("%d", ret);
//	return 0;
//}



//void print(int m)
//{
//	//打印奇数位
//	int i = 0;
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//
//int main()
//{
//	int m = 0;
//	//
//	//
//	//
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


void Jud(int a)
{
    if(a & 1 == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}


int main()
{
    int a = 0;
    while(~scanf("%d", &a))
    {
        Jud(a);
    }
    return 0;
}