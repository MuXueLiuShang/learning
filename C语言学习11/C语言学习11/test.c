#include<stdio.h>


int main()
{
	//int a = 0;
	//int* p = 0;//ȡ��ַ������
	//*p;//�����ò�����
	int a = 0;
	char b = 'w';
	int arr[10] = { 0 };

	printf("%d\n", sizeof(a));//a��ռ�ڴ�ռ��С
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(b));//b��ռ�ڴ�ռ��С
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int[10]));
	
		

}

//��һ�������洢�����ڴ��ж�������1�ĸ���
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
//	//}������
//	printf("%d\n", count);
//	return 0;
//}

//������
//��ʹ�õ������� ��������ֵ
//int main()
//{
//	int a = 7;
//	int b = 8;
//	//�Ӽ���
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//���
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}



//���һ������ʵ��ð������
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
//	bubble_sort(arr,sz);//ð�ݺ�������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}