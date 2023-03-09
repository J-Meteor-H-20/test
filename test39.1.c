#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//接下来我们来简单的学习结构体：

//结构体类型的声明
//结构体初始化
//结构体成员访问
//结构体传参

//1.结构体类型的声明
//  结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//struct tag
//{
//	member-list;
//}variable-list;//变量列表

//描述一个学生-一些数据
//名字
//年龄
//电话
//性别
struct Stu//struct - 结构体关键字    Stu - 结构体标签   struct Stu - 结构体类型
{
	//成员变量
	char name[20];       
	short age;
	char tele[20];
	char sex[5];
}s1,s2,s3;//s1,s2,s3是三个全局结构体变量//但尽量少使用全局变量，还是局部变量更方便使用
//这里的分号必须要加，因为它是一个结构体声明
//以上仅仅只是定义一个结构体类型，相当于int,chard等的类型



typedef struct Stu//typedef给struct Stu重新取个名字
{
	char name[20];
	short age;
	char tele[20];
	char sex[5];
}Stu;//取得名字叫做Stu,接下来就可以用Stu来定义结构体类型变量

//对比可知下面用typedef定义过后的Stu本质上是类型,而上面的s1,s2,s3是变量，两者不可混为一谈
//
//结构体的成员可以是标量、数组、指针，甚至是其他的结构体
//2.结构体初始化
int main()
{
	struct Stu s1 = {"路人X",30,"125******88","保密"};//创建结构体变量//局部变量
	Stu s2 = {"流星",20,"136******85","男"};
	return 0;
}

struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;//结构体T的对象中包含结构体S
	char* pc;
};

int main()
{
	char arr[] = "hello bit\n";//这里的arr和上面结构体里面arr不重复，它们是不同范围内的arr，故互不影响
	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
	printf("%s\n", t.ch);//hehe
	printf("%d\n", t.s.a);//100
	printf("%c\n", t.s.c);//w
	printf("%s\n", t.s.arr);//hello world
	printf("%lf\n", t.s.d);//3.140000
	return 0;
}



//3.结构体成员访问 4.结构体传参
typedef struct Stu
{
	char name[20];
	short age;
	char tele[20];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age:  %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex:  %s\n", tmp.sex);
}

Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age:  %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex:  %s\n", ps->sex);
}

int main()
{
	Stu s = { "路人甲",40,"15598886688","男" };
	Print1(s);//传实参//第一种方法对结构体变量s内容进行打印
	Print2(&s);//传地址//第二种方法对结构体变量s内容进行打印
	//方法二更优一点，因为方法一传参，方法二传地址空间开辟较小，访问时间小，空间，时间上都更优，性能也更好
	//专业一点的说是因为：函数传参的时候是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
	return 0;
}
//总结：结构体传参的时候，要传结构体的地址


//对压栈的简单解释：
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret=Add(a, b);
	//任何一次函数调用都会在内存里的栈区上申请一片空间
	//而内存分为栈区，堆区，静态区
	//栈区里面放有：局部变量，函数的形式参数，还有函数调用也开辟空间
	//堆区用来动态内存分配，涉及到的函数有：malloc/free/realloc/calloc 
	//静态区里面放着：全局变量，静态变量
	//局部变量怎么开辟空间的呢？首先函数（如main函数）先在栈区申请的一部分空间，然后局部变量再在该空间内开辟一部分空间
	//函数传参以Add(a,b)为例：函数传参，两个参数时，从右向左传，即先传b再传a，传入形参y，x,而形参y和x分别再mian 函数所申请的空间之外，再另外箱栈区申请一部分空间
	//而定义的Add函数又向栈区申请了一部分空间，其中局部变量z在Add函数申请的空间内开辟了一部分空间
	//而在传参时，分别把b,a放进y,x中的操作就叫做压栈操作
	//这里就涉及到数据结构里面的知识
	//---线性数据结构：顺序表，链表，栈，队列
	//---树形数据结构：二叉树
	//---图
	//……
	//栈这种数据结构的特点是：先进的后出，后进的先出
	//在栈里面操作时： 插入一个元素叫压栈 ，删除一个元素叫出栈
	//想要了解更多和栈有关的知识，可以查阅：函数栈帧的创建和销毁
	return 0;
}