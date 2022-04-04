#define _CRT_SECURE_NO_WARNINGS 1

//public class People {
//    String name;
//    int age;
//    char gender;
//
//    //普通方法
//
//    //访问修饰符 返回值类型   方法名(参数列表){代码块；}
//    //访问修饰符：public 公开的    protected  受保护的   default   默认的   private  私有的
//    //void：无返回值的
//    public int eat() {
//        System.out.println("吃饭方法");
//        return  10;
//    }
//
//    //静态方法
//    protected static void sleeep() {
//        System.out.println("睡觉方法");
//    }
//
//
//
//}




static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
    return mine[x - 1][y] +
        mine[x - 1][y - 1] +
        mine[x][y - 1] +
        mine[x + 1][y - 1] +
        mine[x + 1][y] +
        mine[x + 1][y + 1] +
        mine[x][y + 1] +
        mine[x - 1][y + 1] - 8 * '0';
}



//int main()
//{
//    char arr[5];
//    char(*pa)[5] = &arr;
//
//    int* parr[6];
//    int* (*pp)[6] = &parr;
//
//    return 0;
//}
//
//
//
//int main()
//{
//    int arr[10];
//    int i = 0;
//    arr[i] == *(arr + i) == p[i] == *(p + i);
//    int* p = arr;
//    *(p + i);
//
//    return 0;
//}