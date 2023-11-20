#include <stdio.h>
//#define MAX=100//#define定义标识符常量
////#define定义宏-带参数
////#define

//函数的实现
int Max(int x, int y)
{
	if (x > y)
		return  x;
	else 
		return  y;
}
//宏的实现
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("max=%d\n", max);
	max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}





//extern int Add(int, int);

//static 修饰局部变量
//局部变量的生命周期变长
//static 修饰全部变量
//改变了变量的作用域 -让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法使用了
//static修饰函数
//改变了函数的连接属性


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum =Add(a,b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//只要是整数，内存中存储的都是二进制补码
// 正数-原码，反码，补码相同
// 原码         ———> 反码   —->补码
// 直接按正负          原码的符号位不变     反码+1
//int main()
//{
//	int  arr[10] = { 0 };
//	arr[4];//[]下标引用操作符
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//exp1？exp2：exp3 条件操作符 三目
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	//printf("c=%d\n", c);&&逻辑与 ||逻辑或
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++/-- 先使用 后++/--
//	//int b = ++a;//前置++/-- 先++/-- 后使用
//	//int b = --a;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;//~按（2进制）位取反
//	//负数在内存中存储的时候，存储的是二进制的补码
//
//	printf("%d\n", b);//使用的，打印的是这个数的源码
//	return 0;
//
//}