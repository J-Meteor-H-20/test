#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	//(�Բ�����в���������ԭ��)
	// (����ԭ�벹�뷴�����)
	//00000000000000000000000000000000
	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001
	printf("%d\n", ~a);//-1
	return 0;
}


//ǿ������ת��    �����ͣ�
int main()
{
	int a = (int)3.14;//������� int a = 3.14Ҳ���Լ���ִ��
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
		printf("NULL����ֵ0");
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

void test1(int arr[])//���յ���������Ԫ�ص�ַ����64λƽ̨��Ϊ8���ֽ�
{
	printf("%d\n", sizeof(arr));//8
}
void test2(char ch[])//���յ���������Ԫ�ص�ַ����64λƽ̨��Ϊ8���ֽ�
{
	printf("%d\n", sizeof(ch));//8
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 'o','i'};
	printf("%d\n", sizeof(arr));//40//����������ռ�Ϊ4���ֽ�
	printf("%d\n", sizeof(ch));//10//�ַ�������ռ�Ϊ1���ֽ�
	int j = 0;
	int sz = sizeof(ch) / sizeof(ch[0]);
	//printf("%d\n", sz);
	/*for (j = 0; j < sz; j++)
		printf("%c\n", ch[j]);*/
	test1(arr);
	test2(ch);
	return 0;
}


//��ϵ������
//��> .  >=  .  <  .  <=  .  !=  .   ==



//�߼�������
//&&�߼���
//||�߼���

int main()
{
	int a = 0;
	int b = 6;
	int c = a && b;//������Ϊ���Ϊ��
	int d = a || b;//��һ��Ϊ���Ϊ��
	printf("%d\n", c);//0
	printf("%d\n", d);//1
	return 0;


int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//a++Ϊ����++����ʹ�ú�++��ʹ��ʱ����&&����a=0Ϊ�٣����治ִ�У���ִֻ����a++
	//i = a++ || ++b || d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//a=1,b = 2,c = 3,d = 4
	printf("%d\n", i);
	return 0;
}

