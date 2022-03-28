#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int max = a > b? a : b;
//    while(1)
//    {
//        if((max % a ==0) && (max % b == 0))
//        { 
//            break;
//        }
//        max++;//加一下继续试除
//    }
//    printf("%d\n", max);
//
//
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int i = 1;
//    while((i * a) % b != 0)//直接当while循环条件，等于0便跳出循环不自增
//    {
//        i++;
//    }
//        printf("%d\n", i*a);
//    return 0;
//}

#include<stdio.h>
#include<string.h>
#include<assert.h>

void reverse(char* left, char* right)
{
    assert(left && right);
    while(left < right)
    {
        char tmp = *left;
        
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }   
}



int main()
{
    char arr[100] = {0};
    int len = strlen(arr);
//输入
    gets(arr);

//1.逆置每一个单词
    char* start = arr;
    char* end = start;

    while(*end != '\0')
    {
        while(*end != '\0' && *end != ' ')
        {
            end++;
        }
        reverse(start, end - 1);// end结束之前的
            if(*end == '\0')//此时到结尾，不用往后走了
            { 
                start = end;        
            }
            else
            {
                start = end + 1;//让end跳过空格，指向下一个单词 
                end = start;
            }
        }

//2.逆置整个字符串
    reverse(arr, arr+len-1);

//输出
    printf("%s\n", arr);

    return 0;
}