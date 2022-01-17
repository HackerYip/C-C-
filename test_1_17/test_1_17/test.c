#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>

int main()
{




//指针数组 - 存放指针的数组

void test(char* arr[4][5])
{}

void test(char* (*p)[5])
{}

int main()
{
	指针数组
	int* arr[5];
	char* arr2[6];
	char** arr3[4];//数组中存放的二级指针
	
	数组指针 - 指向数组的指针
	int arr[10];
	int* p = arr;
	int (*p2)[10] = &arr;//取出的是数组的地址，既然是数组的地址，就应该放到数组指针变量中，int (*)[10] 
	p2就是一个数组指针

	char* arr[4][5];
	test(arr);

	return 0;
}


//函数指针
//函数其实也是有地址的，函数名（或者&函数名）就是函数的地址


int my_test(const char* s)
{
	printf("测试通过函数指针来调用函数\n");
	return 0;
}

int main()
{
	int (*pf)(const char*) = my_test;
  int(*)(const char*)
	pf("hehe");
	return 0;
}

//函数指针的数组-- 存放函数指针的数组 - 指针数组

//指向函数指针数组的指针

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int (*pa)(int, int) = Add;//函数指针
	int (* pfA[4])(int, int);//函数指针的数组
	int (* (*ppfA)[4])(int, int) = &pfA;//ppfA 是一个指针，该指针指向了一个存放函数指针的数组

	return 0;
}


}