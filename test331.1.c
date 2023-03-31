#define _CRT_SECURE_NO_WARNINGS 1
//生活不是一种宿命，而是一种选择
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int main()
{
	void bubble_sort(int a[], int n);
	void print(int a[],int n);
	int a[] = {4,8,6,72,465,11,23,7,0},sz=sizeof(a)/sizeof(a[0]);
	bubble_sort(a, sz);
	print(a,sz);
	return 0;
}
void bubble_sort(int a[], int n)
{
	void exchange(int* p);
	for (int i = n - 1, change = TRUE; i >= 1 && change; --i)
	{
		change = FALSE;
		for (int j = 0; j < i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				exchange(&a[j]);
				change = TRUE;
			}
		}
	}
}
void exchange(int* p)
{
	int tmp;
	tmp = *p;
	*p = *(p + 1);
	*(p + 1) = tmp;
}
void print(int a[],int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}