#include<stdio.h>
//程序 0-9 整数 统计每一种数字出现的次数 -1结束
int main()
{
	const int number = 10;
	int x;
	int count[10];
	int i;
	for (i = 0; i < number; i++)
	{
		count[i] = 0;
	}
	scanf_s("%d ", &x);
	while (x != -1)
	{
		if (x >= 0 && x >= 9)
		{
			count[x]++;
		}
		scanf_s("%d ", &x);	
	}
	for (i = 0; i < number; i++)
	{
		printf("%d:%d\n", i, count[i]);
	}
	return 0;
}

//数组
//int main()
//{
//	int x;
//	int cnt = 0;
//	double sum = 0;
//	int number[100];//定义数组
//	scanf_s("%d", &x);
//	while (x != -1)
//	{
//		number[cnt] = x;//对数组中的元素赋值
//		sum += x;
//		cnt++;
//		scanf_s("%d", &x);
//	}
//	if (cnt > 0)
//	{
//		int i;
//		double average = sum / cnt;
//		for (i = 0; i < cnt; i++)
//		{
//			if (number[i] > average)
//			{
//				printf("%d ",number[i]);//使用数组中的元素
//			}
//		}
//	}
//	
//	return 0;
//}

//正序分解整数
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	int mask = 1;
//	int t = x;
//	while (x > 9)
//	{
//		x /= 10;
//		mask *= 10;
//	}
//	printf("x=%d,maks=%d\n", x, mask);
//	do
//	{
//		int d = x / mask;
//		printf("%d", d);
//		if (mask > 9)
//		{
//			printf(" ");
//		}
//		x %= mask;
//		mask /= 10;
//	} while (mask>0);
//	/*int t = 0;
//	do {
//		int d = x % 10;
//		t = t * 10 + d;
//		x /= 10;
//	} while (x>0);
//	printf("t=%d\n", t);
//	x = t;
//	do
//	{
//		int d = x % 10;
//		printf("%d", d);
//		if (x > 9)
//		{
//			printf(" ");
//		}
//		x /= 10;
//
//	}while (x > 0);*/
//	printf("\n");
//	return 0;
//}