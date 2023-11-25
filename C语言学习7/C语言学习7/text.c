#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//写一个函数，每调用一次这个函数，就会将num的值加1
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	while(num<11)
	{
		Add(&num);
		printf("num = %d\n", num);
		
	}
	return 0;
}

////写一个函数实现整型有序数组的二分查找
//                     //本质上arr是个指针
//int binary_search(int arr[], int k,int sz)
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//	int mid = (left + right) / 2;
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
//			return mid;
//		}
//
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序的数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                      arr传递过去的是数组arr首元素的地址
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

// 写一个函数判段是否为闰年
//int  is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//	
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断是否为闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//写个函数交换内容
//int main()
//{
//	int a = 10;
//	int* pa=&a;//pa 指针变量
//	*pa=20;
//	int b = 20;
//	int* pb = &b;
//	*pb = 10;
//	return 0;
//}
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void swap1(int x,int y)//有错误 x y 无法传输a b的值 不能完成任务
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	return 0;
//}

//两个数取最大值
//get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a,b);
//	printf("max=%d\n", max);
//	max = get_max(100, 300);
//	printf("max=%d\n", max);
//	return 0;
//
//}

////memset函数
////memory -内存 set -设置
//
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//	//strcpy-string copy -字符串拷贝
//	//strlen - string length -字符串的长度有关
//}
//函数的加法
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个相加的数:");
//	scanf_s("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

