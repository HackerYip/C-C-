#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//
//void reverse(char str[], int left, int right)
//{
//
//    char t = 0;
//    while (left <= right)
//    {
//        t = str[left];
//        str[left] = str[right];
//        str[right] = t;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char str[100] = { 0 };
//    while (gets(str) != NULL)
//    {
//        int i = 0;
//
//        int left = 0;
//        int right = strlen(str) - 1;
//        reverse(str, left, right);
//
//        for (i = 0; i <= strlen(str) - 1; i++)
//        {
//            printf("%c", str[i]);//打印字符串
//        }   printf("\n");
//
//        left = 0;
//        for (i = 0; i < strlen(str); i++)
//        {
//            if (str[i] == ' ')
//            {
//                right = i - 1;
//                reverse(str, left, right);
//                left = right + 2;
//            }
//            if (i == strlen(str) - 1)
//            {
//                right = i;
//                reverse(str, left, right);
//            }
//        }
//        for (i = 0; i <= strlen(str); i++)
//        {
//            prtinf("%c", str[i]);
//        }printf("\n");
//    }
//
//
//    return 0;
//}


#include<stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    int temp = 0;
    int i = 0;
    printf("Input m & n:");
    scanf("%d %d", &m, &n);
    if (m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for (i = m; i > 0; i++)  /*从大数开始寻找满足条件的自然数*/

        if (i % m == 0 && i % n == 0)
        {
            printf("%d\n", m, n, i);
            break;
        }

    return 0;
}