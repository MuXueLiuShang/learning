#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//���Թػ�����
int main()
{
	//shutdown -s-t 60
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("���ĵ��Խ���60s֮��ػ���������룺��������ȡ���ػ�\n�����룺");
	scanf_s("%s",&input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//��������Ϸ����
//void menu()
//{
//	printf("***********************************\n");
//	printf("****    1.play      0.exit   ******\n");
//	printf("***********************************\n");
//}
////RAND_MAX-32767
//void game()
//{
//	//1.���ɸ������
//	int ret = 0;
//	int guess = 0;//���ղµ�����
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t*timer)
//	ret = rand()%100+1;//����1-100֮�������
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("������֣�");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�����\n");
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
//		printf("��ѡ��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������������롣\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//�˷��ھ��� ��ӡ
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
//10���������ֵ
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
//�������
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
//��� 1-100��9�ĸ���
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
//	printf("count�ĸ���Ϊ��%d\n", count);
//	return 0;
//}

//���� ��ӡ100-200֮�������
//int main()//�Կռ任ʱ��
//{
//	int i = 0;
//	int count1 = 0;//����ͳ�������ĸ���
//	int count2 = 0;//ͳ��ɸѡ����
//	int arr[200] = { 0 };//��������
//	for (i = 2; i <= 150; i++)//��ʼ��
//	{
//		arr[i] = 1;
//	}
//	for (i = 2; i <= 150; i++)//���±��������
//	{
//		if (arr[i])
//		{
//			int j = 0;
//			printf("%d ", i);//��ӡ����
//			count1++;
//			for (j = i * i; j <= 150; j += i)//��ƽ����ʼɸѡ���������ı�������Ϊ0��
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
//int main()//��ƽ������
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж��Ƿ�Ϊ����
//		//1���Գ���������
//		//ֻ�ܱ�1����������
//		//����2��>i-1
//		//2����ƽ���ж�
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
//		//�ж��Ƿ�Ϊ����
//		//1���Գ���������
//		//ֻ�ܱ�1����������
//		//����2��>i-1
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


//1000-2000�� ��ӡ����
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
//	//�ж��Ƿ�Ϊ����
//	//�ܱ�4�������Ҳ��ܱ�100����������
//	//�ܱ�400����
//	//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//�����Լ�� �������� �����Լ
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	printf("��������������: ");
//	scanf("%d%d", &n,&m);
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}//շת�����
//	printf("���������Լ��Ϊ��%d\n",n);
//	return 0;
//
//}

//��ӡ���ı���
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

//�������Ӵ�С���
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