#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"add.h"
//求第n个斐波那契数列
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("ret = %d\n", ret);
	return 0;

}



//求n的阶乘
//int facl1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for(i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int facl2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * facl2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = facl2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//编写函数 不允许创建临时变量，求字符串长度
//递归的办法吧大事化小
//my_strlen(‘bit‘)
//1+my_strlen(‘it‘)
//1+1+my_strlen(‘t‘)
//1+1+1+my_strlen(‘‘)
//1+1+1+0
//3
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//
//}



//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//数组传参不是整个数组而是首元素的地址
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d", len);
//	printf("len=%d\n", len);
//	return 0;
//}

//练习一 接受一个整型值 按照顺序打印它的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}

//史上最简单递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n",sum);
//	return 0;
//}