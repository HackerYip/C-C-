#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//
//int fib(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//
//   while(n > 2)
//  {
//     c = a + b;
//     a = b;
//     b = c;
//     n--;
//  } 
//      return c;
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fib(n);
//    printf("%d\n",ret);
//
//    return 0;
//}

//#include<stdio.h>
//
//int count = 0;
//int fib(int n)
//{
//  if(n == 3)
//    count++;
//
//  if(n <= 2)
//   return 1;
//   
//  else
//    return fib(n - 1) + fib(n - 2);
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fib(n);
//    printf("%d\n", ret);
//    
//    printf("\ncount = %d\n",count);
//    return 0;
//}






//#include<stdio.h>
//
//
//int power(int n, int k)
//{
//	if (k <= 0)
//		return 1;
//	else
//		return n * power(n, k - 1);
//}
//int main()
//{
//	int n = 1;
//	int k = 1;
//	scanf("%d %d", &n, &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//
//	return 0;
//}






//
//int DigitSum(unsigned int n)
//
//{
//  int m = 0;
//  int sum = 0;
//  if(n != 0)
//    {
//     m = n % 10;
//     n = n / 10;
//     sum = m + DigitSum(n);
//    }
//  
//    return sum;
//
//}
//
//#include<stdio.h>
//
//
//int main()
//
//{
//
//    unsigned int  a = 0;
//
//    int s = DigitSum(a);
//
//    scanf("%d", &a);
//
//    printf("%d\n", s);
//
//    return 0;
//
//}




//#include<stdio.h>
//int my_strlen(char* s )
//{
//if(*s == '\0')
//  return 0;
//else
//  return 1 + my_strlen(s+1);
//}
//
//
//
//
//int main()
//{
//    char arr[] = "abc";
//    int len = my_strlen(arr);
//
//    printf(" %d\n", len);
//
//  return 0;
//
//}





#include <stdio.h>


void reverse_string(char* string)
 {
	if (*string == '\0')
		printf("%c", *string);
	else {
		reverse_string(++string);  
		printf("%c", *(--string)); 
	}
}
	int main() 
   {
	char* string = "abcdef";
    reverse_string(string);
    printf("\n");
		
		return 0;
	}

