#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//本节内容为指针简单介绍，做好准备，恶梦要开始了
//指针是编程语言中的一个对象，利用地址，它的值直接指向存在电脑存储器中的另一个值。由于通过地址能找到所需的变量单元，可以说，地址指向该变量单元。
//因此，将地址形象化的称为“指针”，意思是通过它能找到以它为地址的内存单元
int main()
{
	int arr[10] = { 0 };
	char* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p+i) = 1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

// ……
// ……
// ……
// ……
// ……
//数组与指针
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//地址-首元素的地址
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);//虽然这三种方式打印出来的结果相同，但这里的&arr取出的是整个数组的地址
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr+1);
	//1. &arr - &arr - 这里数组名不是首元素地址-数组名表示整个数组 - &数组名取出的是整个数组的地址
	//2. sizeof(arr) - sizeof(数组名)-数组名表示整个数组 - sizeof(数组名)计算的是整个数组的大小
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//指针存放数组首元素地址//通过指针可以访问数组等，两者有联系，但不是一回事
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%p  =====  %p\n", p + i, &arr[i]);
	}
	return 0;
}

//二级指针
//指针变量也是变量，有变量就有地址，那指针变量的地址存放在哪里呢？这就是二级指针
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;//ppa就是二级指针
	int*** pppa = &ppa;//三级指针
	……
	**ppa = 20;
	printf("%d\n", a);
	return 0;
}

//好孩子   -- 本质是孩子
//指针数组 -- 本质是数组 - 存放指针的数组
//数组指针 -- 本质是指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	////整型数组 - 存放整型
	////字符数组 - 存放字符
	////指针数组 - 存放指针
	//int arr[10];//作为指针数组的类比
	int* arr[3] = {&a,&b,&c};//指针数组的初始化
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	return 0;
}