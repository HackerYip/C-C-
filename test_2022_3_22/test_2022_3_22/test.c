#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void Swap(int *px, int*py)
//{
//    int tmp = 0;
//
//    tmp = *px;
//    *px = *py;
//    *py = tmp;
//}
//
//int main()
//{
//int a = 0;
//int b = 0;
//int c = 0;
//
//
//scanf("%d %d %d", &a, &b, &c);
//
//    if(a < b)
//    {
//        Swap(&a, &b);
//    }
//
//    if(a < c)
//    {
//        Swap(&a, &c);
//    }
//
//    if(b < c)
//    {
//        Swap(&b, &c);
//    }
//    printf("%d %d %d\n",a, b, c);
//
//    return 0;
//}

//int main()
//{
//    int i = 1;
//    while(i <= 100)
//    {
//        if(i % 3 == 0)
//        printf("%d ",i);
//
//        i++;
//    }
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    
//    scanf("%d %d",&a, &b);
//
//    while(c = a % b)
//    {
//        a = b;
//        b = c;
//    }   
//    printf("%d\n", b);
//
//    return 0;
//}



//int main()
//{
//    int i = 1000;
//    for(i=1000; i<=2000; i++)
//    {
//        if(i % 4 == 0 && i % 100 != 0)
//        {
//            printf("%d ",i);
//        }
//        
//        if(i % 400 == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//int main()
//{
//    char input[20] = {0};
//
//    printf("enter your password:>");
//    scanf("%s", input);
//    int tmp = 0;
//    while((tmp = getchar()) == '\n')//拿到的字符只要不是'\n'，继续拿
//    {
//        ;
//    }
//    //getchar();
//
//    printf("confirm your password(Y/N):>");
//
//    int ch = getchar();
//    if(ch == 'Y')
//    {
//        printf("success\n");
//    }
//    else
//    {
//        printf("fail\n");
//    }
//
//    return 0;
//}


//int main()
//{
//    int k = 7;
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//
//    
//    while(left <= right)
//    {
//        int mid = (left + right) / 2;
//        if(arr[mid] > k)
//        {
//            right = mid -1;
//        }
//        else if(arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            printf("找到了，下标是:%d\n", mid);
//            break;
//        }
//     }   
//        if(left > right)
//        {   
//            printf("找不到\n");
//        }
//    return 0;
//}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//
//int main()
//{
//    char arr1[] = {"hello bit!!!!!!!"};
//    char arr2[] = {"################"};
//
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    while(left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//        Sleep(1000); 
//        system("cls");
//    }
//
//    printf("%s\n", arr2);//最后再打印一次保留结果，不然会给cls清走
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int count = 0;
//    for(i=1; i<=100; i++)
//    {
//        if(i % 9 == 0)
//        {
//             count++;
//        }
//        if(i / 9 == 0)
//        {
//             count++;
//        }
//    }
//printf("%d\n", count);
//
//    return 0;
//}


//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int i = 0;
//    float avg = 0.0f;
//
//        for(i=0; i<5; i++)
//        {
//            scanf("%d", &score);
//            sum += score;
//        }
//
//        avg = sum/5.0;
//        printf("%.1f\n", avg);
//
//    return 0;
//}


//int main()
//{
//    int m = 0;
//    int n = 0;
//    int ret = 0;
//    scanf("%d %d", &m, &n);
//
//    if(m > n)
//    ret = n;   
// 
//    else
//    ret = m;
//
//    while(1)
//    {
//        if(m % ret == 0 && n % ret == 0)
//        { 
//            break;
//        }
//        ret--;
//    }
//        
//        printf("%d\n", ret);
//
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    char password[20] = "";
//
//    for(i=0; i<3; i++)
//    {
//        printf("请输入密码:");
//        scanf("%s", password);
//
//        if(strcmp(password, "123456") == 0)
//        {
//            printf("输入正确\n");
//            break;
//        }
//        else
//            printf("输入错误\n");
//    }
//        if(3 == i)
//        {
//            printf("三次密码输入错误，推出程序\n");
//        }
//    return 0;
//}
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<time.h>
//
//void menu()
//{
//    printf("*************************************\n");
//    printf("**********1. play********************\n");
//    printf("**********0. exit********************\n");  
//    printf("*************************************\n");
//}
//
//void game()//游戏逻辑
//{
//    int r = rand()%100 + 1;
//    int guess = 0;//玩家输入猜的数字
//    while(1)
//    {
//        printf("猜数字\n");
//        scanf("%d", &guess);
//        if(guess > r)
//        {
//            printf("猜大了\n");
//        }
//        else if (guess < r)
//        {
//            printf("猜小了\n");
//        }
//        else
//        {
//            printf("猜对了\n");
//            break;
//        }
//    }
//}
//
//
//
//
//
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//
//do
//{
//    menu();
//    printf("请选择:\n");
//    scanf("%d", &input);
//    switch(input)
//    {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:
//            printf("输入错误，请重新输入\n");
//            break;
//    }
//}
//while(input);
//
//
//    return 0;
//}


//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//    char input[25] = {0};
//    system("shutdown -s -t 15");
//
//again:
//    printf("请注意，你嘅电脑会系15秒内关机，如果你输入：我系傻嗨，就会取消关机\n");
//    scanf("%s", input);
//
//   if(strcmp(input,"我系傻嗨") == 0)
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}


//void Swap(int x, int y)
//{
//    int tmp = 0;
//
//    tmp = x;
//    x = y;
//    y = tmp;
//
//}
//
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a, b);
//    Swap(a,b);
//    printf("%d %d",a, b)
//    return 0;
//}

//int is_prime(int n)
//{
//    int j = 0;
//    
//    for(j=2; j<n; j++)//2~n-1试除
//    {
//        if(n % j == 0)
//        { 
//            return 1;
//        }
//    }
//            return 1;
//}
//
//
//
//int main()
//{
//    int i = 0;
//    for(i=0; i<=200; i++)
//    {
//        if(is_prime(i) == 1)
//        {
//            printf("%d\n", i);
//        }
//
//    }
//    return 0;
//}

//int is_leapyear(int n)
//{
//    if((n % 4 ==0) && (n % 100 != 0) || n % 400 == 0 )
//    {
//        return 1 ;
//    }
//    else
//        return 0;
//}
//
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for(y=1000; y<=2000; y++)
//    {
//        if(is_leapyear(y) == 1)
//        {
//            count++;
//            printf("%d ", y);
//        }
//    }
//    printf("\ncount = %d\n",count);
//    return 0;
//}


#include<string.h>

int binary_search(int arr[], int k, int sz)
{
    int left = 0;
    
    int right = sz - 1;
    
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < k)
        {
            left = mid + 1;
        }

        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int ret = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    ret = binary_search(arr, k, sz);//在arr里面找k

    if(-1 == ret)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了,下标是%d\n", ret);
    }

        return 0;

}