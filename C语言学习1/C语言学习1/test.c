#define _CRT_SECYRE_ON_WARNINGS
#include<stdio.h>
#include<string.h>

//��Ŀ������
//˫Ŀ������
//��Ŀ������

int main()
{

	int arr[10] = {0};
	int sz = 0;
	printf("%d\n",sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);
	//���������Ԫ�ظ���
	//�����ܴ�С/ÿ��Ԫ�صĴ�С
	//sizeof������Ǳ���/������ռ�ռ�Ĵ�С ��λ�ֽ�

	return 0;

}

	



//int main()
//{
//	int a = 10;
//	a = 20;//= ��ֵ ==�ж����
//	//a= a+10  = a+=10
//	//���ϸ�ֵ�� +=  -= *= /= %= <<= >>=  &= |= ^=
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ����Ÿ��������ֵ����� 
//	printf("%d\n", arr[4]);//�±����Ԫ��
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
//	printf("�������\n");
//	printf("���Ʊ�Ƿ��н�<1/0>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("�н������ӭȢ�׸���");
//	else
//		printf("û�н�����ʵѧϰ");
//	return 0;
//}


//{
//	//printf("%d\n", '\x16');
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32--32��2��8��������
//	//32��Ϊ8���ƴ����ʮ�������֡���ΪASCII��ֵ����Ӧ���ַ� 
//	//32-->��Ϊʮ����26��ΪASCII��ֵ����Ӧ���ַ�
//	//printf("%c\n", '\132');
//	return 0;
//}



//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));//strlen �����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//{
//	char arr1[] = "abc";//����
//	//"abc"--'a' 'b' 'c' \0  \0�ַ���������־�������������
//	char arr2[] = { 'a','b','c',0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//
//}


//ö�ٳ���
//�Ա���Ů����
//��ԭɫ�����
//���� 1234567
//ö�ٹؼ� enum
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
//#difine����ĳ���
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
//	const int n = 10;//n�Ǳ����������ǳ����ԣ���������˵n�ǳ�����
//	//int arr[n] = { 0 };
//	n = 20;
//}

//{
// const���εĳ�����
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

