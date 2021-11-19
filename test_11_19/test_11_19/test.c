#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>


void reverse(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;//strlen()是计算字符串长度的函数
	while (left < right)
	{//交换最两边的值，向内递进
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "I am a student";//定义一个字符串
	printf("逆序前:%s\n", arr);
	reverse(arr);
	printf("逆序后:%s\n", arr);

	return 0;
}


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a,b);

	printf("%d\n", c);

	return 0;
}
