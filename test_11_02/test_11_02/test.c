#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//void Print(unsigned int n)
//{
//    if(n > 9)
// {
//       Print(n / 10);
// }
//    printf("%d\n", n % 10);
//}
//
//
//
//int main()
//{
//  unsigned int num = 0;
//
//  scanf("%u", &num);
//  Print(num);
//
//}

//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int ret = 1;
//    scanf("%d", &n);
//    int i = 0;
//    for(i=1; i <= n; i++)
//  {
//    ret =ret * i;
//  }
//    printf("ret = %d\n", ret);
//return 0 ;
//}

//int fac(int n)
//{
//    if(n <= 1)
//
//      return 1;
//
//    else
// 
//      return n * fac(n - 1);
//
//}
//
//int main()
//{
//
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fac(n);
//    printf("%d\n", ret);
//
//  return 0;
//
//}

int my_strlen(char* s)
{
    int count = 0;
    while(*s !='\0')
  {
    count++;
    s++;
  }

    return count;
}


#include<stdio.h>
int main()
{
    char arr[] = "abcd";

    int len = my_strlen(arr);
    
    printf("%d\n", len);
  

  return 0;
}