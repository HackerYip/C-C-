#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;  
//    int ret = 1;
//
//    for(i = 1; i <= n; i++)
//            
//    {                                   
//        ret *= 2;                            
//    }
//        printf("%d\n", ret);
//
//  return 0;
//
//}

#include <stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int num1[7] = { 1,3,5,7,8,10,12 };
    int num2[4] = { 4,6,9,11 };
    while (scanf("%d %d", &year, &month) != EOF)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (month == 2)
            {
                printf("29\n");
            }
            else
            {
                for (int i = 0; i < 7; i++)
                {
                    if (month == num1[i])
                    {
                        printf("31\n");
                    }
                }
                for (int j = 0; j < 4; j++)
                {
                    if (month == num2[j])
                    {
                        printf("30\n");
                    }
                }
            }
        }
        else if (month == 2)
        {
            printf("28\n");
        }
        else
        {
            for (int i = 0; i < 7; i++)
            {
                if (month == num1[i])
                {
                    printf("31\n");
                }
            }
            for (int j = 0; j < 4; j++)
            {
                if (month == num2[j])
                {
                    printf("30\n");
                }
            }
        }

    }

    return 0;
}