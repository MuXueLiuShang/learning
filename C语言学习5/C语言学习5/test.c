#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//练习五 编写代码 用户输入三次密码 
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i <= 3; i++)
	{
		printf("请输入密码：");
		scanf_s("%s", password);
		if (strcmp(password, "123456")==0)
		{
			printf("密码正确，登入成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入：");
		}
		if (i == 3)
		{
			printf("三次密码均输入错误，退出程序\n");
		}
	}
	return 0;
}


//练习四 编写代码，演示多个字符从两端移动，向中间聚隆
//int main()
//{
//	char arr1[] = "welcome to new world!!!!!";
//	char arr2[] = "                         ";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);//char[]="abc" {a b c \0}  4-2 c  方法一 low
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");//cls清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}
//练习三在有序数组中查找某个数。
// 方法二 二分法
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}	
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//方法一 最笨的
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int  i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是:%d\n",i);
//			break;
//		}
//	}
//	if(i==sz)
//		printf("找不到");
//	return 0;
//
//}
//练习二 求1！+2！+3！+4！+。。。。+10！
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//
//	return 0;
//}



//练习一 n的阶乘
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
// 	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	
//	return 0;
//}

//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//k=0 为假 循环0次  非0 代码死循环
//		k++;
//	return 0;
//	
//}
//变种二
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//}
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)//for (; j < 10; j++)10个呵呵
//			printf("hehe\n");
//	}
//	return 0;
//}
//变种一
//{
//	for (;;)
//	{
//		printf("hehe\n");
//
//	}
//	return 0;
//}

//{
//	int i = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//	}
//	return 0;
//}


//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf_s("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）:");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("输入成功\n");
//	}
//	else
//	{
//		printf("输入失败\n");
//	}
//	return 0;
//}