#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//дһ��������ÿ����һ������������ͻὫnum��ֵ��1
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

////дһ������ʵ��������������Ķ��ֲ���
//                     //������arr�Ǹ�ָ��
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨��ʵ��
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
//	//���ֲ���
//	//��һ������������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                      arr���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

// дһ�������ж��Ƿ�Ϊ����
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
//		//�ж��Ƿ�Ϊ����
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
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//д��������������
//int main()
//{
//	int a = 10;
//	int* pa=&a;//pa ָ�����
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
//void swap1(int x,int y)//�д��� x y �޷�����a b��ֵ �����������
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

//������ȡ���ֵ
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

////memset����
////memory -�ڴ� set -����
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
//	//strcpy-string copy -�ַ�������
//	//strlen - string length -�ַ����ĳ����й�
//}
//�����ļӷ�
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
//	printf("������������ӵ���:");
//	scanf_s("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

