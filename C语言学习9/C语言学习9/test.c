#include<stdio.h>
#include<string.h>
//��ά����Ĵ���
int mian()
{
	int arr[3][4] = { { 1,2,3 },{4, 5 }};//3��4��
	char ch[5][6];//�п�ʡ�� �в���ʡ��
	return 0;
}

//һά����Ĵ���
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
//	//�������� ������� 10��
//	//int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ��
//	/*char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";*/
//	char arr4[] = "abcdef" ;
//	printf("%d\n", sizeof(arr4));
//	//sizeof ���� arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ�� char 7*1=7
//
//	printf("%d\n", strlen(arr4));
//	//strlen ���ַ�������-��\0��֮ǰ���ַ���
//
//	return 0;
//}
//1.strlen��sizeofû�й���
//2.strlen �����ַ������ȵ� ֻ������ַ����󳤶� �⺯����ʹ��ͷ�ļ�
//3.sizeof ������������顢���ʹ�С ��λ���ֽ� ������

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