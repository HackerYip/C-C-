#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<string.h>
//
//int binary_search(int *arr, int k, int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    while(left <= right)
//    {
//        int mid = (left + right) / 2;
//            if(arr[mid] < k)
//            {
//               left = mid + 1;
//            }
//            else if(arr[mid] > k)
//            {
//                right = mid - 1;
//            }
//            else
//            {
//                return mid;
//            }
//    }
//return -1;
//}
//
//
// int main()
//{
//    int i = 0;
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int k = 7;
//    int ret = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//ret = binary_search(arr, k, sz);
//    if(-1 == ret)
//    {
//        printf("找不到\n");
//    }
//    else
//        printf("找到了，下标是%d\n", ret);
//
//    return 0;
//}

void bubble_sort(int *arr, int sz)
{
    
    int i = 0;
    for(i=0; i<sz-1; i++)
    {
        int j = 0;
       for(j=0; j<sz-1-i; j++)
        {   
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }  

    }   
}

int main()
{
    int arr[] = {3,1,5,2,4,9,0,7,6,8};
    int sz = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, sz);
    int i = 0;

    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}