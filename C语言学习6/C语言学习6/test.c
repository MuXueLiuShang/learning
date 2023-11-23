#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//电脑关机代码
int main()
{
	//shutdown -s-t 60
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("您的电脑将在60s之后关机，如果输入：我是猪，就取消关机\n请输入：");
	scanf_s("%s",&input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//猜数字游戏代码
//void menu()
//{
//	printf("***********************************\n");
//	printf("****    1.play      0.exit   ******\n");
//	printf("***********************************\n");
//}
////RAND_MAX-32767
//void game()
//{
//	//1.生成个随机数
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	//用时间戳来设置随机数的生成起始点
//	//time_t time(time_t*timer)
//	ret = rand()%100+1;//生成1-100之间随机数
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！！！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入。\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//乘法口诀表 打印
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 1;
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%2d ", i, j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//10个数求最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//分数求和
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum+=flag*1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//编程 1-100中9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count的个数为：%d\n", count);
//	return 0;
//}

//代码 打印100-200之间的素数
//int main()//以空间换时间
//{
//	int i = 0;
//	int count1 = 0;//用以统计素数的个数
//	int count2 = 0;//统计筛选次数
//	int arr[200] = { 0 };//创建数组
//	for (i = 2; i <= 150; i++)//初始化
//	{
//		arr[i] = 1;
//	}
//	for (i = 2; i <= 150; i++)//用下标代表数字
//	{
//		if (arr[i])
//		{
//			int j = 0;
//			printf("%d ", i);//打印素数
//			count1++;
//			for (j = i * i; j <= 150; j += i)//从平方开始筛选，把素数的倍数都赋为0；
//			{
//				arr[j] = 0;
//				count2++;
//			}
//		}
//	}
//	printf("\ncount1=%d\n", count1);
//	printf("count2=%d\n", count2);
//	return 0;
//}
//int main()//开平方方法
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断是否为素数
//		//1、试除法不够优
//		//只能被1和自身整除
//		//产生2—>i-1
//		//2、开平方判断
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是否为素数
//		//1、试除法不够优
//		//只能被1和自身整除
//		//产生2—>i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//1000-2000年 打印闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year%4==0&&year%100!=0||year%400==0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	//判断是否为闰年
//	//能被4整除并且不能被100整除是闰年
//	//能被400整除
//	//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//求最大公约数 给定两数 求最大公约
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	printf("请输入两个数字: ");
//	scanf("%d%d", &n,&m);
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}//辗转相除法
//	printf("两数的最大公约数为：%d\n",n);
//	return 0;
//
//}

//打印三的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//三个数从大到小编出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", a, b, c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}