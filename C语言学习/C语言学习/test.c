#define _CRT_SECURE_NO_WARNIGS 1


//std-��׼ input output

#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf_s("%d%d", &num1, &num2);//&ȡ��ַ����	
	sum = num1 + num2;
	printf("%d\n", sum);
	//C�����﷨�涨�����������ڵ�ǰ��������ǰ��
	return 0;

}
//int b = 100;
//int main()
//
//{
//	int a = 10;
//	printf("%d\n",b);//�ֲ�������ȫ�ֱ�����Ҫ��ͬ �׷���bug
//	//���ֲ�������ȫ�ֱ�����ͬʱ �ֲ���������
//	return 0;
//}
//int num2 = 20;//ȫ�ֱ��� �����ڴ�������{}�ı���
//int main()
//{
//	int num1 = 10;//�ֲ����� �����ڴ�����ڲ�
//	return 0;
//}
//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20��
//	float weight = 95.6f;//���ڴ�����ֽڴ��С��
//	return 0;
//
//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int ����
//mainǰ���int��ʾmain�������÷���һ������ֵ
//char-�ַ�����
//%d-��ӡ����
//%c-��ӡ�ַ�
//%f-��ӡ��������-��С��
//%p-�Ե�ַ����ʽ��ӡ
//%x-��ӡ16��������
//%o ...


//int main()//������-��������-���ҽ���һ��
//{
////	//char ch = 'A';//�ڴ�
////	//printf("%c\n", ch);//%c ��ӡ�ַ���ʽ������
////	//int age = 20;
////	//printf("%d\n", age);//%d ��ӡʮ��������
////	//float f = 11.2;
////	//printf("%f\n", f);
////	//double d = 3.14;
////	//printf("%1f\n", d);
////	//return 0;
//}



//{
	//�����������
	//����print ��ӡ function ���� -��ӡ����
	//printf-�⺯��-C���Ա����ṩʹ�õĺ���
	//���˵Ķ���-���к�
	//#include
	//printf("hello world\n");
	//return 0;//return ����
//}
