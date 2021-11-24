#define _CRT_SECURE_NO_WARNINGS 1

//const修饰变量
// const修饰指针


//const 放在*的左边
// const修饰的指针指向的内容，表示指针指向的内容不能通过指针来改变，但是指针变量本身是可以进行改变的
//
//const 放在*的右边
//const修饰的是指针变量的本身，指针变量的内容不能被修改，但是指针指向的内容是可以通过指针来改变的。
//

#include<stdio.h>
int main()
{
    const int n = 10;
    /*n = 20;*/
    int m = 100;
    int* const p = &n;
    //p = &m;
    *p = 20;


    printf("%d", n);
    return 0;

}