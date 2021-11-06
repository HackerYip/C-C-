#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int* p = &arr[0];
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        //printf("%p\n", p+i);
        printf("%d ", *(p + i));
    }

    return 0;
}

