#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//
//
//
//
//int main()
//
//{
//
//	int i;
//
//	int count = 0;
//
//	for (i = 1; i <= 100; i++) {
//
//		if (i % 10 == 9) {
//
//			count++;
//
//		}
//
//		if (i / 10 == 9) {
//
//			count++;
//
//		}
//
//	}
//
//	printf("\n 9µÄ¸öÊýcount=%d \n", count);
//
//
//
//	return 0;
//
//}
//


#include <stdio.h>

void init(int a[], int sz) {
	int i;
	for (i = 0; i < sz; i++) {
		a[i] = 0;
	}
}


void print(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
 {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//init(arr, sz);
	
    print(arr, sz);
	
	print(arr, sz);

	return 0;
}
