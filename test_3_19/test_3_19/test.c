#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", *p);
//	return 0;
//}
//struct Book
//	//����������ͣ��������ϸ����Ϣ
//{
//	char name[30];
//	double price;
//	char id[];
//};
//int main()
//{   //����һ���ṹ��ָ��
//	struct Book b1 = { "�˼�ʧ��", 55.6, "ISBN" };
//	struct Book* ps = &b1;
//	printf("����:%s\n", (*ps).name);//�ṹ�����.��Ա��
//	printf("������%s\n", ps->name);//�ṹ��->��Ա��      
//	printf("����:%s\n", b1.name);   //����д����ȫ�ȼ�
//	printf("�۸�%lf\n", b1.price);
//	printf("��ţ�%s\n", b1.id);
//	return 0;
//}
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("buneng\n");
//	}
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 60)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf('haha\n');
//	return 0;
//}
//int main()
//{
//	int num = 1;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i < 101)
//	{
//		printf("%d\n", i);
//		i = i + 2;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	default://Ĭ��ѡ������ܱ�case�����
//		printf("����\n");
//		break;
//
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//m=3
//	case 2:
//		n++;//n=2
//	   switch (n)
//		{
//	   case 1:
//		n++;//��ִ��
//	   case 2:
//		   m++;//m=4
//		   n++;//n=3
//		   break;
//		}
//	case 4:
//		m++;//m=5
//		break;
//	default:
//		break;
//	}
//	printf("m=%d, n=%d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		b = 30;
//	case 2:
//		b = 20;
//	case 3:
//		b = 10;
//	default:
//		b = 0;
//	}
//	return b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//		printf("%d%d%d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d", i);
//	}
//	return 0;
//}
//int main()
//
//{
//
//	int a = 0;
//
//	int b = 0;
//
//	int c = 0;
//
//	int d = 0;
//
//	scanf("%d%d%d", &a, &b, &c);
//
//    if (a < b)
//
//	{
//
//		d = a;
//
//		a = b;
//
//		b = d;
//
//	}
//
//	if (a < c)
//
//	{
//
//		d = a;
//
//		a = c;
//
//		c = d;
//
//	}
//
//	if (b < c)
//
//	{
//
//		d = b;
//
//		b = c;
//
//		c = d;
//
//	}
//
//	printf("%d%d%d\n", a, b, c);
//
//	return 0;
//
//}
int main()

{

	int a = 0;

	int b = 0;

	int c = 0;

	int d = 0;

	scanf("%d%d%d", &a, &b, &c);

	if (a < b)

	{

		d = a;

		a = b;

		b = d;

	}

	if (a < c)

	{

		d = a;

		a = c;

		c = d;

	}

	if (b < c)

	{

		d = b;

		b = c;

		c = d;

	}

	printf("%d%d%d\n", a, b, c);

	return 0;

}