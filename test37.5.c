#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//a++为后置++，先使用后++，使用时，与&&连用a=0为假，后面不执行，故只执行了a++
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//a=1,b = 2,c = 3,d = 4
	printf("%d\n", i);//i=0
	return 0;
}

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//a++为后置++，先使用后++，使用时，与||连用a=1为真，后面不执行，故只执行了a++
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//a=2,b = 2,c = 3,d = 4
	printf("%d\n", i);//i=1
	return 0;
}

//条件操作符
//exp1 ? exp2 : exp3  ---即为如果exp1为真，择执行exp2，否则执行exp3
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	/*if (a > b)
		max = a;
	else
		max = b;*/
	max = (a > b ? a : b);//两个执行语句等价
	printf("%d\n", max);
	return 0;
}


//逗号表达式:就是用逗号隔开的多个表达式，从左到右依次进行，整个表达式的结果是最后一个表达式的结果
//exp1,exp2,exp3……


//代码1
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);//13
	int d = 1;
	if (a = b + 1, c = a / 2, d > 0)
		printf("最终结果为最后一个表达式结果");

	//
	//
	//
	//
	//逗号表达式在While循环中的应用
	a = get_val();
	count_val();
	while (a > 0)
	{
		//业务处理
		a = get_val();
		count_val();
	}//
	//可以用逗号表达式换为
	while (a = get_val(), count_val(), a > 0)
	{
		//业务处理
	}
	return 0;
}

//下标引用、函数调用和结构成员
//1.下标引用操作符---[]
//操作数：一个数组名+一个索引值
int main()
{
	int a[10] = { 0 };
	a[4] = 10;//a和4是[]的两个操作数
	1 + 2;//1和2是+的两个操作数
	return 0;
}

//2.()函数调用操作符，接受一个或多个操作数：第一个操作数是函数名，剩下的操作数就是传递给函数的参数
int get_max(int x, int y)//这里的()是语法规则，不是函数调用操作符
{
	return x > y ? x : y;
}
int main()
{
	int a = 10;
	int b = 20;
	//调用函数的时候的()就是函数调用操作符
	int max = get_max(a, b);//这里操作数有三个:get_max,a,b
	printf("%d\n", max);
	return 0;
}

//访问一个结构的成员
//.    结构体.成员名
//->   结构体指针->成员名

//先创建一个结构体类型-struct Stu
struct Stu//这里由structd定义的struct Stu和int、float一样是种类型
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
	struct Stu s1 = { "逆流星",20,"21111501070" };
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//结构体变量.成员名
	struct Stu* ps = &s1;
	printf("%s\n", (*ps).name); 
	printf("%d\n", (*ps).age);
	//结构体指针->成员名
	printf("%s\n", ps->name);//ps指针指向对象的name
	printf("%s\n", ps->id);
	return 0;
}
