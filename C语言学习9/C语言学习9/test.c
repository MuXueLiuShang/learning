#include<stdio.h>
#include<string.h>
//二维数组的创建
int mian()
{
	int arr[3][4] = { { 1,2,3 },{4, 5 }};//3行4列
	char ch[5][6];//行可省略 列不可省略
	return 0;
}

//一维数组的创建
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//创建数组 存放整型 10个
//	//int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认为零
//	/*char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";*/
//	char arr4[] = "abcdef" ;
//	printf("%d\n", sizeof(arr4));
//	//sizeof 计算 arr4所占空间的大小
//	//7个元素 char 7*1=7
//
//	printf("%d\n", strlen(arr4));
//	//strlen 求字符串长度-‘\0’之前的字符数
//
//	return 0;
//}
//1.strlen和sizeof没有关联
//2.strlen 是求字符串长度的 只能针对字符串求长度 库函数得使用头文件
//3.sizeof 计算变量、数组、类型大小 单位是字节 操作符

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i=0;i<len;i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}