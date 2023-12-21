#include<stdio.h>


int main()
{
	//int a = 0;
	//int* p = 0;//取地址操作符
	//*p;//解引用操作符
	int a = 0;
	char b = 'w';
	int arr[10] = { 0 };

	printf("%d\n", sizeof(a));//a所占内存空间大小
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(b));//b所占内存空间大小
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int[10]));
	
		

}

//求一个整数存储中在内存中二进制中1的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	scanf_s("%d", &i);
//
//	int j = 0;
//	for (j = 0; j < 32; j++)
//	{
//		if (1 == ((i >> j) & 1))
//		{
//			count++;
//		}
//	}
//
//	//while (i)
//	//{
//	//	if (i % 2 == 1)
//	//	{
//	//		count++;
//	//		i = i / 2;
//	//	}
//	//}有问题
//	printf("%d\n", count);
//	return 0;
//}

//操作符
//不使用第三变量 交换两个值
//int main()
//{
//	int a = 7;
//	int b = 8;
//	//加减法
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//异或法
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}



//设计一个函数实现冒泡排序
//void bubble_sort( int arr[] , int sz )
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//冒泡函数排序
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}