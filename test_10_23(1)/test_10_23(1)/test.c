#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main ()
//{
//int input = 0;
//printf("加入比特\n");
//printf("你要好好学习吗?(1/0):");
////输入
//scanf("%d", &input);
//
////判断
//if(input == 1)
//{
//printf("好offer\n");
//}
//else
//{
//printf("卖红薯\n");
//}
//return 0;
//
//}


//int main()
//{
//int a = 0;
//a = 20//一个等号是赋值
//if(a == 20);//两个等号是判断 
//    printf("");
//
//    return 0;
//
//}


//int main()
//{
//int line  = 0
//    printf("加入比特\n");
//
//while(line<20000)
//{
//    printf("敲代码\n");
//    line = line + 1;
//}
//if(line >= 20000)
//    printf("好offer\n");
//else
//    printf("火候还不够\n");
//
//    return 0;
//}



//函数声明
//int Add(int x ,int y)//实现Add函数要定义
//{
//int z = x + y;
//return z ;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//int sum =0;
//    scanf("%d %d", &num1 , &num2);
////sum = num1 + num2;//求和
////实现函数来求和
//sum = Add(num1,num2);
//printf("sum=%d\n",sum);//打印 
//    return 0;
//
//}

//数组
//int main()
//{
//int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //arr就是10个元素的整型数组
////0~9
//int i = 0 ;//使用i产生下标
//while(i<9)
//{
//printf("%d\n",arr[i])
//i = i + 1;
//}
////存字符 - 字符数组
////char ch[5] = {'a','b','c','d','e'};
//// char [6] = "hello";
////int arr[10] = {0}; 
//    printf("");
//
//    return 0;
//
//}


//int main()
//{
////int n = 7/2;
//    //printf("%d\n",n0);
//double ret = 7.0 / 2;
//printf(" % d\n",n);


//% - //取模(余)
//int n = 7 % 2;//7/2 商3余数1
//printf("%d\n",n);
//    return 0;
//
//}

//
//int main()
//{
//int n =0;
//scanf("%d\n", &n);
//if (n % 2 == 1)
//printf("奇数\n");
//else
//printf("偶数\n");
//% - 取模操作符只能作用于整型
//
//return 0;
//}


// int main()
//{
// int a = 3;
//int b = a << 1 ;
//
//    printf("%d\n",b);
//
//    return 0;
//
//}

//{
//int a = 3;
//int b = 5;
//int c = a & b;//按位与，对应的二进制位有0，则为0，全1才为1
//int c a | b;//按位或，对应的二进制位有1，则为1，全0才为0
//int c = a ^ b;//按位异或，相同为0，相异为1
//  printf(" % d",c)
//return 0 ;
//}


//C语言中0表示假，非0表示真

//int a = 10;
//
////printf("%d\n",!a);
//
//int a = 10;
//int b = -a;
//printf("%d\n",b);
//
////运算符就是操作符
////英文内容翻译的结果不一样
////sizeof计算的是变量或者类型所创建变量占据内存的大小，单位是字节
//
////printf("%d\n",sizeof(a));//4
//
////~ - 按位取反(2进制位)
//
//
//return 0 ;


//int main()
//{
//int a = 10;
//int b = ++a;//前置++，先++，后使用
//int b = a++;//后置++
//printf("a=%d b=%d\n",a ,b),//11 11
//int b = a--;//先使用后--
////9 10
//return 0;
//
//}
//{
//    int a = 3;
//int b = 5;
////if((a == 3 ) && (b == 3))
////{
////printf("hehe\n");
////}
//
//if ((a == 3) || (b == 3))
//{
//printf("hehe\n");
//}
//return 0 ;
//}



//条件操作符
//exp1 ? exp2 : exp3
//简化if语句
//int a = 0;
//int b = 0 ;
//int max = 0;
////输入
//scanf("%d %d", &a, &b);//
//
////比较
////if (a > b)
////max = a;
////else
////max = b; 
////三目操作符
//max =(a > b? a : b );


//int a = 3;
//int b = 5;
//int c = 10;
////逗号表达式会从左向右依次计算
//// 整个逗号表达式的结果是最后一个表达式的结果
//
//
//int d = ( a + 2, b = a - 3, c = b + 4);
////b = 0  c = 4
//
//printf("%d\n",d);
//return 0 ;

//
//typedef unsigned int u_int;
//
//int main()
//{
////unsigned int - 无符号整形
//
//unsigned int num = 100;
//u_int num2 = 100;
//    printf("")
//        return 0;
//
//}


//
//int main()
//{
// //此处a是寄存器变量
////register是建议作用，建议编译器把a变量放入寄存器，没有决定性作用，编译器有自己的判断能力
//register int a = 10 ;
////寄存器变量是不能取地址的
//   
//        return 0;
//
//}


//
//int main()
//{
//int a = 0;
//int b = 0;
//int max  =0;
//scanf("%d %d", &a, &b);
//if ( a > b )
//{ 
//max = a;
//}
//else
//{
// max = b;
//}
//printf("%d\n",max);
//
//return 0;
//
//
//}

//#include<stdio.h>
//
//int main()
//
//{
//
//    int a = 0;
//
//    int b = 0;
//
//
//
//    scanf("%d %d", &a, &b);
//
//
//
//    int n = a % b;//余
//
//    int g = a / b;//商
//
//    printf("%d %d", g, n);
//
//    return 0;
//
//}



#include <stdio.h>
int main() {
    int a = 40, b, c = 212;
    b = (-8 + 22) * a - 10 + c / 2;
    printf("%d", b);
    return 0;

}
