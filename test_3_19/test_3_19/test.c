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
//	//定义书的类型，描述书的细节信息
//{
//	char name[30];
//	double price;
//	char id[];
//};
//int main()
//{   //创建一个结构体指针
//	struct Book b1 = { "人间失格", 55.6, "ISBN" };
//	struct Book* ps = &b1;
//	printf("书名:%s\n", (*ps).name);//结构体变量.成员名
//	printf("书名：%s\n", ps->name);//结构体->成员名      
//	printf("书名:%s\n", b1.name);   //两种写法完全等价
//	printf("价格：%lf\n", b1.price);
//	printf("编号：%s\n", b1.id);
//	return 0;
//}
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("buneng\n");
//	}
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 60)
//		printf("中年\n");
//	else
//		printf("中老年\n");
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
//		printf("奇数\n");
//	else
//		printf("偶数\n");
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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	default://默认选项，处理不能被case的情况
//		printf("错误\n");
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
//		n++;//不执行
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