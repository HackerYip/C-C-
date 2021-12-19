#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, k;
	int A[10];
	int B[10];
	int C[10];
	printf("请输入数组A的内容:");
	for (i = 0; i < 10; ++i) 
	{
		scanf("%d", &A[i]);
	}
	printf("请输入数组B的内容:");
	for (j = 0; j < 10; ++j) 
	{
		scanf("%d", &B[j]);
	}

	for (k = 0; k < 10; ++k) 
	{
		C[k] = A[k];
	}

	for (i = 0; i < 10; ++i) 
	{
		A[i] = B[i];
	}

	for (j = 0; j < 10; ++j) 
	{
		B[j] = C[j];
	}

	printf("交换后的数组A:");
	for (i = 0; i < 10; ++i) 
	{
		printf("%d ", A[i]);
	}

	printf("\n");
	printf("交换后的数组B:");
	for (j = 0; j < 10; ++j) 
	{
		printf("%d ", B[j]);
	}

	printf("\n");
	system("pause");
	return 0;
}
