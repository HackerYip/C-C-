#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//    assert(str != NULL);
//    const char* s = str;
//    while (*s++ != '\0')
//    {
//
//        ;
//
//    }
//    return s - str - 1;
//}
//
//
//int main()
//{
//    char arr[] = "abcdef";
//    int len = my_strlen(arr);
//
//    printf("%d\n", len);
//
//    return 0;
//}
//


#include<stdio.h>

int check_sys()
{
    int a = 1;

    return *(char*)&a;
}




int main()
{
  int ret = check_sys();

    if(1 == ret)
    {
    printf("Ð¡¶Ë\n");
    }
    else
    {
    printf("´ó¶Ë\n");
    }
  return 0;
}
