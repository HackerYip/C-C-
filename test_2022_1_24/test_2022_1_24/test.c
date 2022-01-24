#define _CRT_SECURE_NO_WARNINGS 1

#include<limits.h>

int main()
{
    int* p = (int*)malloc(INT_MAX)；
    int i = 0;
    if(p == NULL)
    return 0;

    for(i = 0; i < 10; i++)
    {
        *(p + i)= i;//直接这样写，malloc开辟太大，开辟不出来，p返回空指针，程序崩溃
    }
    return 0;
}


//2.对动态开辟空间的越界访问

int main()
{
    char* p = (char*)malloc(10 * sizeof(char));

    if(p == NULL)
    {
    printf("%s\n",strerror(errno));

    return 0;
}
//使用
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        *(p + i) = 'a' + i;
    }
//释放
    free(p);//不能释放两次，但如果第一次free没把p置成空指针是可以释放两次的，但是尽量不要对同一个空间释放两次
    p = NULL;

    return 0 ;
}


int main()
{
int* p = (int*)malloc(40);
//

}


void test()
{
    int* p = (int*)malloc(100);
    if(p = NULL)
    {
        return 0;
}
//使用
//
//忘记释放，就会出现内存泄露的问题
return 0;
}

int main()
{
    test();

    return 0;
}


//柔性数组
struct S1
{
    int n;
    int arr[0];//大小是未指定的
};

struct S2
{
    int n;
    int arr[];//柔性数组，和上面一样

};
int main()
{
    //printf("%d\n", sizeof(struct S1));
    struct S2* ps = (struct S2*)malloc(sizeof(struct S2) + 40);
    ps -> n = 100;

    int i = 0;
    for(i = 0; i < 10; i++)
    {
        ps -> arr[i] = i;
    }
    //增容
   struct S2* ptr = realloc(ps, sizeof(struct S2) + 80);
    if(ptr == NULL)
    {
        return 0;
    }
    //释放
    ps = NULL;

    return 0;
}
