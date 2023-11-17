#define _CRT_SECYRE_ON_WARNINGS
#include<stdio.h>
#include<string.h>

//单目操作符
//双目操作符
//三目操作符

int main()
{

	int arr[10] = {0};
	int sz = 0;
	printf("%d\n",sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);
	//计算数组的元素个数
	//数组总大小/每个元素的大小
	//sizeof计算的是变量/类型所占空间的大小 单位字节

	return 0;

}

	



//int main()
//{
//	int a = 10;
//	a = 20;//= 赋值 ==判断相等
//	//a= a+10  = a+=10
//	//复合赋值符 +=  -= *= /= %= <<= >>=  &= |= ^=
//	return 0;
//
//}


//int main()
//{
//	int a = 1;
//	int b = a << 23;
//	printf("%d\n", b);
//	return 0;
//}




//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放个整型数字的数组 
//	printf("%d\n", arr[4]);//下标访问元素
//	//char ch[10]
//	//float arr2[10]
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//
//}
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	sum = Add(3, 2);
//	printf("sum=%d\n", sum);
//	return 0;
//
//}



//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("买彩票是否中奖<1/0>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("中奖五百万，迎娶白富美");
//	else
//		printf("没中奖，老实学习");
//	return 0;
//}


//{
//	//printf("%d\n", '\x16');
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32--32是2个8进制数字
//	//32作为8进制代表的十进制数字。作为ASCII码值，对应的字符 
//	//32-->作为十进制26作为ASCII码值，对应的字符
//	//printf("%c\n", '\132');
//	return 0;
//}



//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));//strlen 计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//{
//	char arr1[] = "abc";//数组
//	//"abc"--'a' 'b' 'c' \0  \0字符串结束标志，不算结束内容
//	char arr2[] = { 'a','b','c',0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//
//}


//枚举常量
//性别男女保密
//三原色红黄蓝
//星期 1234567
//枚举关键 enum
//enum Color
//{
//	RED,
//	YELLOW,
//	BULE
//};
//int main()
//{
//	enum Color color = BULE;
//	return 0;
//
//}

//enum SEX
//{
//	MALE,
//	PEMALE,
//	SECRET,
//
//};
//int main()
//{
//	
//	//enum SEX s= PEMALE,
//	printf("%d\n", MALE);
//	printf("%d\n", PEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//#difine定义的常量
//#define MAX 10
//int main()
//
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//
//}

//{
//	const int n = 10;//n是变量，但又是常属性，所以我们说n是常变量
//	//int arr[n] = { 0 };
//	n = 20;
//}

//{
// const修饰的常变量
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//}


//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d",&num1,&num2);
//	//scanf strcpy strlen strcat
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

