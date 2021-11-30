#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//猜凶手
//题目内容：
//日本某地发生了一起谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的其中一个
//以下为4个嫌疑犯的供词：
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手


int main()
{
    int killer = 0;
    for(killer = 'a'; killer <= 'd'; killer++)
    {
        //1或者0                  1或者0               1或者0             1或者0
        if((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
        {
            printf("%c\n", killer);
        }
    }
    return 0;
}