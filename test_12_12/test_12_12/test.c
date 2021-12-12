#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    int c = a ^ b;
    //c有多少个1就说明a与b有几个数字不同
    int count = 0;
    while (c) {
        count++;
        c = c & (c - 1);
    }

    printf("%d\n", count);
    return 0;
}