#include <stdio.h>
//#define MAX=100//#define�����ʶ������
////#define�����-������
////#define

//������ʵ��
int Max(int x, int y)
{
	if (x > y)
		return  x;
	else 
		return  y;
}
//���ʵ��
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("max=%d\n", max);
	max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}





//extern int Add(int, int);

//static ���ξֲ�����
//�ֲ��������������ڱ䳤
//static ����ȫ������
//�ı��˱����������� -�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û��ʹ����
//static���κ���
//�ı��˺�������������


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum =Add(a,b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//ֻҪ���������ڴ��д洢�Ķ��Ƕ����Ʋ���
// ����-ԭ�룬���룬������ͬ
// ԭ��         ������> ����   ��->����
// ֱ�Ӱ�����          ԭ��ķ���λ����     ����+1
//int main()
//{
//	int  arr[10] = { 0 };
//	arr[4];//[]�±����ò�����
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//exp1��exp2��exp3 ���������� ��Ŀ
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	//printf("c=%d\n", c);&&�߼��� ||�߼���
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++/-- ��ʹ�� ��++/--
//	//int b = ++a;//ǰ��++/-- ��++/-- ��ʹ��
//	//int b = --a;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;//~����2���ƣ�λȡ��
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������Դ��
//	return 0;
//
//}