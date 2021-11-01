//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int main()
//{
//    int i = 0;
//    int count =  0;
//    for(i = 1; i <= 100; i++)
//    {
//      if(i % 10 == 9)
//      {
//      count++;
//      }
//          else if(i / 10 ==9)
//         {
//         count++;
//         }
//    }  
//   printf("\n9的个数一共有count=%d\n",count);
//return 0;
//}








void Swap(int* pa, int* pb)
{

int z = 0;
 z = *pa;
 *pa = *pb;
 *pb = z;

}




#include<stdio.h>
int main()
{
     int a = 0;
     int b = 0;
     scanf("%d %d", &a , &b);
     
     printf("交换前:a = %d b = %d\n ", a , b);
     
     Swap(&a ,&b);

     printf("交换后:a = %d b = %d ", a , b);


return 0;
}


