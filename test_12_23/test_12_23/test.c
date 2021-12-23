#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
int main(void)
{
    int a[] = { 900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500 };
    int n = 0;
    int i = 0;
    int j = 0;
    int buf = 0;
    n = sizeof(a) / sizeof(a[0]);  /*a[0]是int型, 占4字节, 所以总的字节数除以4等于元素的个数*/
    for (i = 0; i < n - 1; ++i)  //比较n-1轮
    {
        for (j = 0; j < n - 1 - i; ++j)  //每轮比较n-1-i次,
        {
            if (a[j] < a[j + 1])
            {
                buf = a[j];
                a[j] = a[j + 1];
                a[j + 1] = buf;
            }
        }
    }
    for (i = 0; i < n; ++i)
    {
        printf("%d\x20", a[i]);
    }
    printf("\n");
    return 0;
}