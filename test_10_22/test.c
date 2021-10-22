//写一个代码

//每一个同学初学都会写的

//hello world
//运行代码：ctrl+F5


//#include <stdio.h>
//int main()
//{
//	//打印hello world
//	//打印有打印函数，printf
//	//printf 是一个库函数 - 而库函数是别人写的函数，库里面提供的一个函数不是自己的
//	//你使用别人的函数要打招呼，要包含一个头文件stdio.h 
//	printf("hello world\n");
//	return 0;
//
//}



//写C语言代码的时候
//首先要知道main函数
//main函数是程序的入口
//程序是从main函数的第一行开始执行的
//按F10代码从main函数第一行开始执行
//main函数（主函数）有且只有一个
//int叫“整型”main函数运行结束后，返回一个整型的值
//return 0的0就是一个整数，在main函数结束的时候被返回




//C语言是用来写代码用的
//写代码是为了解决问题
//


//int main（）
//{
//	//年龄	
//	int age = 20;//使用int这种整型类型创建一个变量叫age，并且赋值为20
//age = age+1；
////派 3.14159
//float pai = 3.14f；
//return 0;
//}

//#include <stdio.h>
//int main()
{
	////int age = 20;//age这个变量的创建其实是要在内存中开辟空间的
	//return 0;
	////关键字：sizeof C语言中的sizeof是用来计算变量或者使用类型创建的变量的大小，单位是字节
	//printf("hello world\n");//打印字符串
	//printf("%d\n", 100);
	//printf("%d\n", age);//20
	//%d - 打印一个10进制的整数

//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//
//}


//int main()
//{
//	char ch = 'w';//字符是用单引号引起来的
//	//'a' 'b' 'c'
//	float weight;
//	//类型 + 变量名；
//	double pai;
//	//C语言为了描述变化的值，使用变量
//	//不变的值用常量
//
//	//类型 变量名
//	int age = 0;
//	char c;
//	//变量在创建的时候，不初始化是一种不好的代码风格
//	//当一个局部变量不初始化的时候，它的值是随机的
//	printf("%d\n", age);
//	return 0;
//}	

//{}就是一个代码块
//在代码块内部定义的变量就是局部定量
//在代码块外部定义的变量就是全局定量

int a = 100;//全局变量
int main()
{
	int a = 10;//局部变量
	//局部变量和全局变量的名字冲突的情况下，局部优先
	printf("%d\n", a);//
	return 0;
}
