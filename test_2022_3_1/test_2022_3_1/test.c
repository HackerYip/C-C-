#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
    int n = 0;
    int a = 0;
    int b = 1;
    int c = a + b;
    scanf("%d", &n);
    while (1)
    {
        if (n == b)//
        {
            printf("%d\n", 0);
            break;
        }

        else if (n < b)//
        {

            if (abs(a - n) < abs(b - n))
            {
                printf("%d\n", abs(a - n));
                break;
            }
            else
            {
                printf("%d\n", abs(b - n));
                break;
            }

        }

        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}


