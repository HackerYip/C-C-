#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
  int arr[10][10] = { 0 };
  int i = 0;
  int j = 0;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j <= i; j++)
        {
        if(j == 0)
        arr[i][j] = 1;

        if(i == j)
        arr[i][j] = 1;

        if(i >= 2 && j >= 1)
        arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];

    printf(" %d", arr[i][j]);
        }
    printf("\n");
    }
  return 0;
}

//#include<stdio.h>
//
//int main()
//{
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            if (j == 0)//二维数组的第一列
//                arr[i][j] = 1;
//
//            if (i == j)//二维数组的对角线
//                arr[i][j] = 1;
//
//            if (i >= 2 && j >= 1)//运算
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//
//            printf(" %d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}