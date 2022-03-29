#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>   

struct S
{
    int arr[1000];
    float f;
    char ch[100];
};

//
//void print(struct S tmp)
//{
//    int i = 0;
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ", tmp.arr[i]);
//    }
//    printf("\n");
//    printf("%f\n", tmp.f);
//    printf("%s\n", tmp.ch);
//}




void print2(struct S* ps)
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", ps->arr[i]);
    }
    printf("\n");
    printf("%f\n", ps->f);
    printf("%s\n", ps->ch);
}



int main()
{
    struct S s = { {1,2,3,4,5,6,7,8,9,10}, 5.5f, "hello bit" };
    /*print(s);*/
    print2(&s);
    return 0;
}


//
//传值和传址，传址节省内存空间，具体参考CSDN本人函数栈帧的开辟相关文章
