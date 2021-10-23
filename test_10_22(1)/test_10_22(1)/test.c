#define _CRT_SECURE_NO_WARNINGS 1

//stdio  标准输入输出头文件
#include<stdio.h>

// 
//int b = 100;//大括号外，全局变量
//
//int main()
//{
//	int a = 10;//大括号内为局部变量
//	{
//		int d = 0;//也算大括号内，所以为局部变量
//	}
//	return 0;
//
//}
//
//
//int c = 1000;//大括号外，全局变量

//scanf是C语言提供一个输入函数
//&  -- 取地址
//
//int main()
//{
//	//2个整数的相加
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//输入2个值
//	scanf("%d %d", &num1, &num2);
//	//计算
//	sum = num1 + num2;
//	//打印(输出)
//	printf("%d\n", sum);
//	return 0;
//
//}

//报错中讲到的scanf_s的函数是VS编译器提供的，不是C语言自己的
//在其他编译器（gcc、clong）下就没scan_f的函数，也不认识这个函数
//当你在代码中使用了scanf_s函数，你的代码在其他的编译器下就没法正确的编译，这就降低了代码的跨平台性
//所以建议写代码时尽量使用标准C提供的功能和函数
//

//如果非要使用，请研究清楚怎么用

//变量的作用域和生命周期

//作用域



//int g = 100;//全局变量作用域更大
//
//
//int main()
//
//{
//
//	printf("%d\n", g);
//
//	int a = 10;
//	{
//		int b = 20;
//		printf("%d\n", b);
//		printf("%d\n", g);
//	}
//	//printf("%d\n",b);此处不定义b，出了作用域
//
//	printf("%d\n", g);
//	return 0;
//
//}

//局部变量的作用域就是变量所在的局部范围，所在大括号
//全局变量的作用域是整个工程

//生命周期
//局部变量的生命周期：进入局部变量所在的范围，生命周期即开始，出了局部变量所在范围时，生命周期结束
// 全局变量：整个程序的生命周期





//int g = 100;
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	//printf("%d\n",a)
//	return 0;
//
//}





//int main()
//{
//	//1.字面常量，直接看懂
//	100;
//	3.14;
//	"abc";
//	'w';
//	//2.const 修饰的常变量；当一个变量不想给修改就加上const
//	//虽然下面num是不能修改的，但是本质上还是一个变量，只是具有了不能修改的
//
//	const int num = 10;
//	printf("num=%d\n", num);//10
//	num = 20;
//	printf("num=%d\n", num);//20
//
//	//数组的概念
//	//int a = 10;
//	//int b = 11;
//	//int c = 12;//0-99
//	//int arr[100] = { 0 };
//	const int n = 100;
//	int arr[n] = { 0 };//此处n必须是常量，前面加了const仍旧是变量所以不能运行
//
//	//C99 的标准中，支持：变长数组，允许变量来指定数组大小
//	//int n = 100;
//	// int arr[n];
//	// 不推荐这样
//
//	return 0;
//
//}


//
//#define 定义的标识符常量
//
//
//
//#define MAX 100
//
//
//int main()
//{
//	int a = MAX;
//	int arr[MAX];
//
//	printf("%d\n", a);
//	return 0;
//}


//4.枚举常量

//枚举 - 一一列举
//生活中很多值可以一一列举
//有些不适合，如性别：男、女、保密
//工资：不适合一一列举

//enum Sex
//{
//	//枚举这种类型的可能取值 - 就是枚举常量
//	MALE,
//    FEMALE,
//	SECRET
//
//};
//
//int main()
//{
//
//	//enum Sex s = MALE;
//	
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	//MALE = 10;//ERROR
//
//	return 0;
//
//}

//
//int main()
//{
//	'a';
//	'#';
//
//	"abc";//字符串
//	"a";//字符串0
//	"";//空字符串
//
//	return 0;
//
//}

//#include<string.h>
//int main()
//{
//	//可以把字符串放在字符数组中
//	//char ch = "abc";//ERROR
//	char arr1[] = "abc";//字符串其实末尾隐藏一个'\0','\0'是字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c'};//在末尾主动放'\0'就可以相等了
//	 
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//strlen
//    //string length - 求字符串长度的函数
//
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	//printf("%s\n", ""hehe"");
//	//printf("hehe\n");
//	return 0;
//
//}

//
//
//int main()
//{
//	printf("hehe\nabc")//此处\n为转义字符，前面的\0也是转义字符
//
//	return 0;
//}




//转义字符：转变原来的意思
//int main()
//{
//
//	//printf("c:\test\104\test.c");//ERROR，转义字符在作怪
	//printf("c:\\test\\104\\test.c");//再让他转义转义
//
//	printf("he\nhe")//转变n原来的意思，变成换行的意思
//
//	return 0;
//}



//int main()
//{
	/*printf("%c", '\'');*/
	//printf("(hehe??)");//?? - 在有些编译器里面会变成三字母词 - 会解译成  ]
	//(hehe]
	//在??前各放一个'\'就会转义最后不变成三字母词
	/*printf("%s", "\"");*/
//		return 0;
//}

//
//int main()
//{
//
//	printf("\a\a\a");//电脑蜂鸣'\a'
//
//	return 0;
//}


//int main()
//{
//
//	printf("%d\b",100);//退格符
//
//	return 0;
//}


//
//int main()
//{
//
//	printf("%s\b","abc");//退格符号
//
//	return 0;
//}


//int main()
//{
//
//	printf("%c\n",'\130' );
//	printf("%c\n", '\071');
//	//\130 - 8进制的130转换为10进制 为88 ASCII值 对应字符'X'
//
//	return 0;
//}

//
//
//int main()
//{
//
//	printf("%c\n",'\x30');//\xdd 16进制对应48
//
//	return 0;
//}


//int main()
//{
//
//	printf("%d\n",strlen("c:\test\628\test.c"));//14
//
//	//'\t'  '\62 '  
//
//	return 0;
//}


//C语言有2种注释方式
// C99后引入的注释方式 - C++的注释风格
/* C99之前C语言的注释方式 - C的注释风格，缺陷是不支持嵌套注释*/  



//#include<stdio.h>
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//
//    return 0;
//}

#include<stdio.h>
int main()
{
	printf("I lost my cellphone!\n");
	return 0;
}