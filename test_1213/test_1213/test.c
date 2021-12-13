#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//冒泡排序
//两两相邻的元素进行比较，如果有可能的话需要交换


//void bubble_sort(int arr[], int sz)
//void bubble_sort(int* arr, int sz)
void bubble_sort(int* arr, int sz)
{            //4         /   4
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		//一趟冒泡排序比较的对数
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	/*int arr[2][3][4];*/
	//数组传参
	int arr[10] = { 3,1,5,2,4,9,0,7,6,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	//设计一个函数对arr数组进行排序 - 冒泡排序的算法
	bubble_sort(arr, sz);//实际上数组传参，传递的不是整个数组，传过去的数组首元素的地址

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
