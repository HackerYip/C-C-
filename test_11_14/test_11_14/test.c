
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
    int a = 8;
    int b = 6;
    printf("交换前: a=%d, b=%d\n", a, b);
    a = a ^ b;
    b = a ^ b;//a ^ b^b
    a = a ^ b;//a ^ b ^ a

    printf("交换后: a=%d, b=%d\n", a, b);
    return 0;
}


#include<stdio.h>

int main()
{
    int a = 0;

    while (scanf("%d", &a) != EOF)
    {
        if (a % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    return 0;
}