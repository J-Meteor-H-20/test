#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//a++Ϊ����++����ʹ�ú�++��ʹ��ʱ����&&����a=0Ϊ�٣����治ִ�У���ִֻ����a++
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//a=1,b = 2,c = 3,d = 4
	printf("%d\n", i);//i=0
	return 0;
}

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//a++Ϊ����++����ʹ�ú�++��ʹ��ʱ����||����a=1Ϊ�棬���治ִ�У���ִֻ����a++
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//a=2,b = 2,c = 3,d = 4
	printf("%d\n", i);//i=1
	return 0;
}

//����������
//exp1 ? exp2 : exp3  ---��Ϊ���exp1Ϊ�棬��ִ��exp2������ִ��exp3
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	/*if (a > b)
		max = a;
	else
		max = b;*/
	max = (a > b ? a : b);//����ִ�����ȼ�
	printf("%d\n", max);
	return 0;
}


//���ű��ʽ:�����ö��Ÿ����Ķ�����ʽ�����������ν��У��������ʽ�Ľ�������һ�����ʽ�Ľ��
//exp1,exp2,exp3����


//����1
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);//13
	int d = 1;
	if (a = b + 1, c = a / 2, d > 0)
		printf("���ս��Ϊ���һ�����ʽ���");

	//
	//
	//
	//
	//���ű��ʽ��Whileѭ���е�Ӧ��
	a = get_val();
	count_val();
	while (a > 0)
	{
		//ҵ����
		a = get_val();
		count_val();
	}//
	//�����ö��ű��ʽ��Ϊ
	while (a = get_val(), count_val(), a > 0)
	{
		//ҵ����
	}
	return 0;
}

//�±����á��������úͽṹ��Ա
//1.�±����ò�����---[]
//��������һ��������+һ������ֵ
int main()
{
	int a[10] = { 0 };
	a[4] = 10;//a��4��[]������������
	1 + 2;//1��2��+������������
	return 0;
}

//2.()�������ò�����������һ����������������һ���������Ǻ�������ʣ�µĲ��������Ǵ��ݸ������Ĳ���
int get_max(int x, int y)//�����()���﷨���򣬲��Ǻ������ò�����
{
	return x > y ? x : y;
}
int main()
{
	int a = 10;
	int b = 20;
	//���ú�����ʱ���()���Ǻ������ò�����
	int max = get_max(a, b);//���������������:get_max,a,b
	printf("%d\n", max);
	return 0;
}

//����һ���ṹ�ĳ�Ա
//.    �ṹ��.��Ա��
//->   �ṹ��ָ��->��Ա��

//�ȴ���һ���ṹ������-struct Stu
struct Stu//������structd�����struct Stu��int��floatһ����������
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	//ʹ��struct Stu������ʹ�����һ��ѧ������s1,����ʼ��
	struct Stu s1 = { "������",20,"21111501070" };
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//�ṹ�����.��Ա��
	struct Stu* ps = &s1;
	printf("%s\n", (*ps).name); 
	printf("%d\n", (*ps).age);
	//�ṹ��ָ��->��Ա��
	printf("%s\n", ps->name);//psָ��ָ������name
	printf("%s\n", ps->id);
	return 0;
}
