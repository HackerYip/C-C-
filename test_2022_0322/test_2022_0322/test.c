#define _CRT_SECURE_NO_WARNINGS 1


//void Swap(int x, int y)
//{
//    int tmp = 0;
//
//    tmp = x;
//    x = y;
//    y = tmp;
//
//}
//
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a, b);
//    Swap(a,b);
//    printf("%d %d",a, b)
//    return 0;
//}

//int is_prime(int n)
//{
//    int j = 0;
//    
//    for(j=2; j<n; j++)//2~n-1试除
//    {
//        if(n % j == 0)
//        { 
//            return 1;
//        }
//    }
//            return 1;
//}
//
//
//
//int main()
//{
//    int i = 0;
//    for(i=0; i<=200; i++)
//    {
//        if(is_prime(i) == 1)
//        {
//            printf("%d\n", i);
//        }
//
//    }
//    return 0;
//}

//int is_leapyear(int n)
//{
//    if((n % 4 ==0) && (n % 100 != 0) || n % 400 == 0 )
//    {
//        return 1 ;
//    }
//    else
//        return 0;
//}
//
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for(y=1000; y<=2000; y++)
//    {
//        if(is_leapyear(y) == 1)
//        {
//            count++;
//            printf("%d ", y);
//        }
//    }
//    printf("\ncount = %d\n",count);
//    return 0;
//}


#include<string.h>

int binary_search(int arr[], int k, int sz)
{
    int left = 0;

    int right = sz - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < k)
        {
            left = mid + 1;
        }

        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}


int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;
    int ret = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    ret = binary_search(arr, k, sz);//在arr里面找k

    if (-1 == ret)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了,下标是%d\n", ret);
    }

    return 0;

}