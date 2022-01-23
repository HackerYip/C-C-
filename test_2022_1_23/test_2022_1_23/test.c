#define _CRT_SECURE_NO_WARNINGS 1

enum Day
{
//枚举的可能取值
Mon,
Tues,
Wed,
Thur,
Fri,
Sta,
Sun
};

typedef enum Sex 
{
    MALE=4,
    FEMALE,
    SECRET
}Sex;


int main()
{
enum Day d = Sun;
enum Sex s = SECRET;
Sex s2 = MALE;
printf("%d\n", sizeof(s2));

//printf("%d\n", MALE);
//printf("%d\n", FEMALE);
//printf("%d\n", SECRET);

}


union Un
{
    char c;
    int i;
};

int main()
{
    union Un u;
    printf("%d\n", sizeof(u));
    printf("%p\n", &u);
    printf("%p\n", &(u.c));
    printf("%p\n", &(u.i));

    return 0;
}

//check_sys()
//{
//    int a = 1;
//    return(*(char*)&a);
//}


int check_sys()
{
    union Un
    {
        char c;
        int i;
    }u;

    u.i = 1;
    return u.c;
}


int main()
{
    int ret = check_sys();
    if(1 == ret)
        printf("小端\n");
    else
        printf("大端\n");

    //如果返回1，表示小端
    //如果返回0，表示大端

    return 0;
}

#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main()
{
//开辟10个整型的空间
//int arr[10];
    int* p = (int*)malloc(40);

    if(NULL == p)
    {
        printf("%s\n", strerror(errno));
    }
    //使用
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }

    for(i = 0 ; i < 10; i++)
    {
        printf("%d ", p[i]);
    }

    //释放
    free(p);//当释放后p就是野指针了
    p = NULL;//重点，置空指针，变安全了，这个地址找不回还给操作系统的那个空间

    return 0;
}

int main()
{
    //开辟10个整型的空间
    //int arr[10];
    int* p = (int*)calloc(10, sizeof(int));

    if (NULL == p)
    {
        printf("%s\n", strerror(errno));
    }
    //使用
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }
    //需要增容
    int *ptr = (int*)realloc(p, 80);
    if (NULL != ptr)
    {
     p = ptr;
    }
    //继续使用了


    //释放
    free(p);//当释放后p就是野指针了
    p = NULL;//重点，置空指针，变安全了，这个地址找不回还给操作系统的那个空间

    return 0;
}