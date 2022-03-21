#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////int main()
////{
////    int n = 0;
////    scanf("%d", &n);
////    
////    if(n % 5 == 0)
////    {
////    printf("YES\n");
////    }
////    else
////    {
////    printf("NO\n",);
////    }
////
////    return 0;
////}
//
//int Max(int a, int b)
//{
//    return(a > b? a : b);
//}
//int main()
//{
//int a = 0;
//int b = 0;
//int max = 0;
//scanf("%d %d", &a, &b);
//
////if(a > b)
////max = a;
////else
////max = b;
////
//
////max = (a > b? a : b); 
//max = Max(a, b);
//
//printf("%d\n", max);
//
//    return 0;
// }
//
//struct Stu
//{
//    char name[20];
//    int age;
//    char sex[10];
//};
//
//int main()
//{
//    struct Stu zhangsan = {"zhangsan", 4, "男"};
//    struct Stu lisi = {"lisi", 10, "女"};
//
//    return 0;
//}
//
//
//int main()
//{
//    int a = 0;
//    if(a % 2 == 1)
//    {
//        printf("奇数\n");
//    }
//    else
//    {
//    printf("偶数\n");
//    }
//
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    while(a <= 100)
//    { 
//        if(a % 2 == 1)
//        {
//            printf("%d\n", a);
//        }
//    a++;
//    }
//    return 0;
//}
//
// 
// 
// 
//
//#include<stdio.h>
//
//int DIV(int x, int y)
//{
//    int c = x / y;
//    /*int d = x % y;*/
//      
//    return c;
// 
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;   
//    int rem = 0;
//    scanf("%d", &a, &b);
//    
//    rem = DIV(a, b);
//
//    printf("%d\n", rem);
//
//    return 0;
//}

//#include<stdio.h>
//
//int Sim(int a, int c)
//{
//    int z = 0;
//    z = (-8 + 22) * a - 10 + (c / 2);
//    return z;
//}
//
//int main()
//{
//    int a = 40;
//    int c = 212;
//    int b = 0;
//
//    b = Sim(a, c);
//       
//    printf("%d\n", b);
//
//    return 0;
//}

//#include <stdio.h>
//
//int Div(int x, int y)
//{
//    int z = x % y;
//    return z;
//}
//
//int Div2(int x, int y)
//{
//    int k = x / y;
//    return k;
//}
//
//
//int main()
//{
//int a = 0;
//int b = 0; 
//int c = 0;
//int d = 0;
//
//scanf("%d %d", &a, &b);
//
//    c =  Div(a, b);
//    d =  Div2(a, b);
//
//
//printf("%d %d\n", c, d);
//
//
//    return 0;
//}

//
//#include<stdio.h>
//
//int rev(int x)
//{
//    if (x < 0)
//        return 1;
//    else if (0 == x)
//        return 0;
//    else
//        return -1;
//
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    b = rev(a);
//
//    printf("%d\n", b);
//
//    return 0;
//}


#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int seconds = 0;
//    int min = 0;
//    int hour = 0;
//    //b = a % 60;//余数
//   //c = b / 60; //商
//    scanf("%d", &a);
//    seconds = (a / 60) / 60;
//    min = (a % 60) % 60;
//    hour = (a / 60) % 60;
//    printf("%d %d %d\n", hour, min, seconds);
//    return 0;
//}


//#include<stdio.h>
//
//float Avg(int a, int b, int c, int d, int k)
//{
//    float z = (a + b + c + d + k) / 5.0;
//        return z;
//}
//
//
//int main()
//{
//    int a;
//    int b;
//    int c;
//    int d;
//    int k;
//    int ret = 0;
//    scanf("%d %d %d %d %d\n", &a, &b, &c, &d, &k);
//
//        ret = Avg(a, b, c, d, k);
//
//    printf("%.1lf\n", ret);
//
//    return 0;
//}

#include<stdio.h>

struct Stu
{
    char name[20];
    int age;
    char sex[10];
};
int main()
{
    struct Stu Jack = { "Jack", 18, "man" };

    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("%s %d %s\n", Jack.name, Jack.age, Jack.sex);


    return 0;
}
