#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", 2 << (n - 1));
//
//  return 0;
//}

//int main()
//{
//int n = 0;
//scanf("%d", &n);
//printf("%d", 1 << n);
//
//  return 0;
//}



//void print(int num)
//{
//    int i, j;
//    for (i = 0; i < num; i++)
//    {
//        for (j = 0; j < num; j++)
//        {
//            if (j == 0 || j == i || i == num - 1)   //第一列和每行最后一列以及最后一行输出*
//            {
//                printf("* ");
//            }
//            else
//            {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int num;
//    while (scanf("%d", &num) != EOF)
//    {
//        print(num);
//    }
//    return 0;
//}


int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;  
    int ret = 1;

    for(i = 1; i <= n; i++)
            
    {                                   
        ret *= 2;                            
    }
        printf("%d\n", ret);

  return 0;
}