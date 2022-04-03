#define _CRT_SECURE_NO_WARNINGS 1

struct student 
{
    int num;
    char name[32];
    float score; 
}stu;

int main()
{


    return 0;
}

#define MAX(x,y)((x)>(y)?(x):(y))

#include<stdio.h>

int get_max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int a = 3;
    int b = 5;


    //ºê
    int m = MAX(a, b);
    //int m = ((a)>(b)?(a):(b));
    printf("%d\n", m);

    m = get_max(a, b);
    printf("%d\n", m);

    return 0;
}