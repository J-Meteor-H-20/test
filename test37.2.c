#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	//(对补码进行操作，返回原码)
	// (正数原码补码反码相等)
	//00000000000000000000000000000000
	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001
	printf("%d\n", ~a);//-1
	return 0;
}


//强制类型转换    （类型）
int main()
{
	int a = (int)3.14;//但这里的 int a = 3.14也可以继续执行
	printf("%d\n", a);
	return 0;
}


int main()
{
	int a = -10;
	int* p = NULL;
	printf("%d\n", !2);//0
	printf("%d\n", !0);//1
	a = -a;
	p = &a;
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof a);//4
	*p = 5;
	printf("%d\n", a);//5
	//printf("%d\n", sizeof int);// error
	return 0;
}


int main()
{
	int* p = NULL;
	printf("%d\n", p);//0
	printf("%d\n", sizeof(p));
	printf("%d\n", NULL);//0
	printf("%d\n", sizeof(NULL));
	if (NULL == 0)
	{
		printf("NULL是数值0");
	}
	return 0;
}

int main()
{
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(double));//8
	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(1);//error
//	printf("%d\n", sizeof('a');//error
	return 0;
}

void test1(int arr[])//接收的是数组首元素地址，在64位平台中为8个字节
{
	printf("%d\n", sizeof(arr));//8
}
void test2(char ch[])//接收的是数组首元素地址，在64位平台中为8个字节
{
	printf("%d\n", sizeof(ch));//8
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 'o','i'};
	printf("%d\n", sizeof(arr));//40//整形所申请空间为4个字节
	printf("%d\n", sizeof(ch));//10//字符所申请空间为1个字节
	int j = 0;
	int sz = sizeof(ch) / sizeof(ch[0]);
	//printf("%d\n", sz);
	/*for (j = 0; j < sz; j++)
		printf("%c\n", ch[j]);*/
	test1(arr);
	test2(ch);
	return 0;
}


//关系操作符
//有> .  >=  .  <  .  <=  .  !=  .   ==



//逻辑操作符
//&&逻辑与
//||逻辑或

int main()
{
	int a = 0;
	int b = 6;
	int c = a && b;//两个都为真才为真
	int d = a || b;//有一个为真就为真
	printf("%d\n", c);//0
	printf("%d\n", d);//1
	return 0;


int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//a++为后置++，先使用后++，使用时，与&&连用a=0为假，后面不执行，故只执行了a++
	//i = a++ || ++b || d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//a=1,b = 2,c = 3,d = 4
	printf("%d\n", i);
	return 0;
}

