#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//sizeof������������顢���͵Ĵ�С-��λ���ֽ�-������
//	printf("%d\n", strlen(arr));//strlen �����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3 };
//	char arr3[] = "abc";
//	char arr4[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr3));//4
//	printf("%d\n", sizeof(arr4));//3
//	printf("%d\n", strlen(arr3));//��\0֮ǰ�ĸ���//3
//	printf("%d\n", strlen(arr4));//���ֵ
//	return 0;
//
//}
//
//int main()
//{
//	char arr5[] = "abcdef";//[a][b][c][d][e][f][\0]
//	int i = 0;
//	for(i=0;i<(int)strlen(arr5);i++)//��strlen��δ���壻�����ⲿ���� int//ͨ��int����ǿ������ת��
//	{
//		printf("%c ", arr5[i]);//%c��ӡ�ַ�
//	}
//	return 0;
//}
//int main()
//{
//	int arr6[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr6) / sizeof(arr6[0]);//������������Ԫ�ظ���
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ", arr6[i]);
//	}
//	return 0;
//}




//һά���飺
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);//����&arr[0]=000000CC32B8F878//&arr[1] = 000000CC32B8F87C
//	}//16���ƣ�0-9 a b c d e f//���Կ��Կ�����ÿ����ַ���һ��ʮ�����Ƶ�4,�պ���һ��Ԫ�صĴ�С
//	//���������ڴ�����������ŵ�
//	return 0;
//}//[]:�±����ò�����





//��ά���飺
//int main()
//{
//	//int arr1[3][4];//��ʾ���������������͵�ֵ//��ά����Ĵ���
//	//char arr2[4][6];
//	//double arr3[4][5];
//	int arr[3][4] = { 1,2,3,4,5 };//����ȫ��ʼ����һ�����������һ�У�Ĭ��ֵΪ0
//	int arr[3][4] = { {1,2,3},{4,5} };//��һ��Ϊ1��2��3��0�� �ڶ���Ϊ4��5��0��0��������Ϊ0��0��0��0
//	//char ch[3][4];
//	int arr[][6] = { 1,2,3 };//����ʡ���е�����ʡ����
//	return 0;
//
//}






//��ά����ķ���
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5},{6} };
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		int j = 0;
//		for(j=0;j<4;j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5},{6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p ",i,j,&arr[i][j]);//��ά�������ڴ��к�һά����һ��Ҳ��������ŵ�
//
//		}//������ȷ��ʱ�����ʸ��еĵڼ���������һά����ķ��ʣ�arr[0][j] 
//		printf("\n");
//	}
//	return 0;
//}









//������Ϊ��������
//����������ð������
void bubble_sort(int arr[],int sz)//����ʱ�����������Ϊָ��
{
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);--��λ��Ϊ����ʾ��
	for (i=0;i<sz-1;i++)
	{
		int flag = 1;//������һ�������Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//������������ݲ���ȫ����
			}

		}
		if (flag == 1)
			break;
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//arr�����飬���鴫�Σ�ʵ���ϴ���ȥ��������arr����Ԫ�ص�ַ: &arr[0]
	int k = 0;
	for (k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++)
	{
		printf("arr[%d]=%d\n", k, arr[k]);
	}
	return 0;
}




