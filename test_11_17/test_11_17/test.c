#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

//int main()
//{
//    int a = 0x11223344;
//    //int* pa = &a;
//    //*pa = 0;
//
//    char* pc = &a;
//    *pc = 0;
//
//    return 0;
//}



//int main()
//{
//    //char* pc;
//    //int* pa;
//    //double* pd;
//
//    //    printf("%d\n", sizeof(pc));
//    //    printf("%d\n", sizeof(pa));
//    //    printf("%d\n", sizeof(pd));
//    
//  return 0;
//}

#include<stdio.h>
int main()
{
    int a = 10;
    int* pa = &a;
    char* pc = &a;

    printf("%p\n", pa);
    printf("%p\n", pa+1);

    printf("%p\n", pc);
    printf("%p\n", pc + 1);
  return 0;
}


