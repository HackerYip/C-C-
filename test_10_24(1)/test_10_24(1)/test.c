#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//int a = 10;
////%p - 打印的格式来打印
//
////printf("%p\n",&a);
//p = &a;//p是用来存放地址的，所以我们把p称为指针变量
//int *p = &a;//
//
//return 0;
//} 



#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//& - 取地址操作符
//* - 解引用操作符/间接访问操作符

//int main()
//{
//	int a = 10;
//	//%p - 打印的格式来打印
//	//printf("%p\n",  &a);
//
//	int * p = &a;//p是用来存放地址的，所以我们把p称为指针变量
//	*p = 20;//*的解引用操作符，*p的意思就是通过p中的值，找到p所指向的对象，也就是说*p就是a
//
//	//printf("%d\n", a);
//	printf("%d\n", sizeof(p));
//
//	/*printf("%p\n", p);
//	printf("%p\n", &a);*/
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//
//	printf("%d\n", sizeof(short*));//
//	printf("%d\n", sizeof(int*));//
//	printf("%d\n", sizeof(long*));//
//	printf("%d\n", sizeof(float*));//
//	printf("%d\n", sizeof(double*));//
//
//	return 0;
//}
//


//结构体类型的定义
//struct Stu
//{
//	//结构体的成员
//	char name[20];
//	int age;
//	char sex[10];
//};
//#include <string.h>
//
//int main()
//{
//	//创建结构体变量，并且初始化
//	struct Stu zhangsan = {"张三", 30, "男"};
//	struct Stu lisi = {"李四", 24, "保密"};
//
//	//->这个操作符
//	struct Stu * pl = &lisi;
//	printf("%s %d %s\n", (*pl).name, (*pl).age, (*pl).sex);
//	printf("%s %d %s\n", pl->name, pl->age, pl->sex);
//
//	//打印结构体的数据
//	//printf("%s %d %s\n", zhangsan.name, zhangsan.age, zhangsan.sex);
//	//printf("%s %d %s\n", lisi.name, lisi.age, lisi.sex);
//
//	return 0;
//}

//.
//结构体成员访问的操作符
//结构体变量.结构体成员
//
//-> 
//结构体成员访问的操作符
//结构体指针->结构体成员
//

//
//int main()
//{
//	;//空语句
//
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//
//	//1
//	//if (age >= 18 && age < 40)
//	//{
//	//	printf("1：呵呵\n");
//	//}
//	////2 - 逻辑上是不满足要求的
//	//if (18 <= age < 40)
//	//{
//	//	printf("2: 哈哈\n");
//	//}
//
//	//if (age < 18)
//	//	printf("少年\n");
//	//else if (age < 40)
//	//	printf("青年\n");
//	//else if (age < 60)
//	//	printf("壮年\n");
//	//else if (age < 90)
//	//	printf("老年\n");
//	//else
//	//	printf("老寿星\n");
//
//
//
//	//if (age < 18)
//	//	printf("少年\n");
//	//else if (age >= 18 && age < 40)
//	//	printf("青年\n");
//	//else if (age >= 40 && age < 60)
//	//	printf("壮年\n");
//	//else if (age >= 60 && age < 90)
//	//	printf("老年\n");
//	//else
//	//	printf("老寿星\n");
//
//	//if (age >= 18)
//	//	printf("成年\n");
//	//else
//	//	printf("未成年\n");
//
//	/*if (age >= 18)
//		printf("成年\n");*/
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//	else
//	//		printf("haha\n");
//
//	//《高质量C/C++编程》
//	return 0;
//}

//else是和离他最近的if进行匹配的

//
//int  main()
//{
//	int a = 10;
//
//	if (5 == a)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//



//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//if (a % 2 == 1)
//	/*if (a % 2 != 0)
//	{
//		printf("奇数\n");
//	}*/
//
//	return 0;
//}
//


//int main()
//{
//	int i = 1;
//	//while (i <= 100)
//	//{
//	//	printf("%d ", i);
//	//	i += 2;
//	//}
//
//	//while (i <= 100)
//	//{
//	//	if(i%2 == 1)
//	//		printf("%d ", i);
//	//	i++;
//	//}
//
//
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//9
//	int n = 1;
//	switch (day)
//	{	
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("输入错误，请输入1~7的数字\n");
//		break;
//	}
//	//if (1 == day)
//	//	printf("星期1\n");
//	//else if(2 == day)
//	//	printf("星期2\n");
//	//....
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//


//#include <stdio.h>
//int main() {
//    int i, sum = 0;
//    i = 1;  //语句①
//    while (i <= 100 /*语句②*/) {
//        sum += i;
//        i++;  //语句③
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//
//
//
//    int i = 100;
//
//    while (i <= 200)
//
//    {
//
//        if (i % 1 == i && i % i == 1)
//
//        {
//
//            printf("%d\n", i);
//
//        }
//
//        i++;
//
//    }
//
//    return 0;
//
//
//
//}


//
//int main()
//{
//int a = 0;
//scanf("%d", &a);
//
//switch(a)
//{
//case 1:
//
//printf("%d\n",a);
//case 2:
//
//return 0;
//}

