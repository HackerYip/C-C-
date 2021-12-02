#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print(int arr[], int sz)
{
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

void move(int arr[], int sz)
{
    int* left = arr;
    int* right = arr + sz - 1;
//从右向左找一个偶数，停下来
    while(left < right)
    { 
        while((left < right) && (*left) % 2 == 1)
        {
            left++;
        }
//从右向左找一个奇数，停下来
        while((left < right) && (*right) % 2 == 0)
        {
            right--;
        }   
//奇数和偶数交换
        if(left < right)
        {
            int tmp = *left;
            *left = *right;
            *right = tmp;
        }
    }
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    print(arr, sz);
    move(arr, sz);
    print(arr, sz);

    return 0;
}

//#include<stdio.h>
//
//int main()
//{
//    unsigned char a = 200;
//    unsigned char b = 100;
//    unsigned char c = 0;
//    c = a + b;
//
//    printf("%u %d", a + b, c);
//
//    return 0;
//}
