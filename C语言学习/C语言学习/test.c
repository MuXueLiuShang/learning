#define _CRT_SECURE_NO_WARNIGS 1


//std-标准 input output

#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf_s("%d%d", &num1, &num2);//&取地址符号	
	sum = num1 + num2;
	printf("%d\n", sum);
	//C语言语法规定：变量定义在当前代码块的最前面
	return 0;

}
//int b = 100;
//int main()
//
//{
//	int a = 10;
//	printf("%d\n",b);//局部变量与全局变量不要相同 易发生bug
//	//当局部变量与全局变量相同时 局部变量优先
//	return 0;
//}
//int num2 = 20;//全局变量 定义在大括号外{}的变量
//int main()
//{
//	int num1 = 10;//局部变量 定义在代码块内部
//	return 0;
//}
//int main()
//{
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20、
//	float weight = 95.6f;//向内存申个字节存放小数
//	return 0;
//
//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int 整型
//main前面的int表示main函数调用返回一个整型值
//char-字符类型
//%d-打印整型
//%c-打印字符
//%f-打印浮点数字-打小数
//%p-以地址的形式打印
//%x-打印16进制数字
//%o ...


//int main()//主函数-程序的入口-有且仅有一个
//{
////	//char ch = 'A';//内存
////	//printf("%c\n", ch);//%c 打印字符格式的数据
////	//int age = 20;
////	//printf("%d\n", age);//%d 打印十进制数据
////	//float f = 11.2;
////	//printf("%f\n", f);
////	//double d = 3.14;
////	//printf("%1f\n", d);
////	//return 0;
//}



//{
	//这里完成任务
	//函数print 打印 function 函数 -打印函数
	//printf-库函数-C语言本身提供使用的函数
	//别人的东西-打招呼
	//#include
	//printf("hello world\n");
	//return 0;//return 返回
//}
