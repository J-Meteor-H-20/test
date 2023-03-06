#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//sizeof计算变量、数组、类型的大小-单位是字节-操作符
//	printf("%d\n", strlen(arr));//strlen 是求字符串长度的-只能针对字符串求长度-库函数-使用得引头文件
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3 };
//	char arr3[] = "abc";
//	char arr4[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr3));//4
//	printf("%d\n", sizeof(arr4));//3
//	printf("%d\n", strlen(arr3));//求\0之前的个数//3
//	printf("%d\n", strlen(arr4));//随机值
//	return 0;
//
//}
//
//int main()
//{
//	char arr5[] = "abcdef";//[a][b][c][d][e][f][\0]
//	int i = 0;
//	for(i=0;i<(int)strlen(arr5);i++)//“strlen”未定义；假设外部返回 int//通过int进行强制类型转换
//	{
//		printf("%c ", arr5[i]);//%c打印字符
//	}
//	return 0;
//}
//int main()
//{
//	int arr6[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr6) / sizeof(arr6[0]);//计算整形数组元素个数
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ", arr6[i]);
//	}
//	return 0;
//}




//一维数组：
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);//例：&arr[0]=000000CC32B8F878//&arr[1] = 000000CC32B8F87C
//	}//16进制：0-9 a b c d e f//所以可以看出，每个地址相差一个十六进制的4,刚好是一个元素的大小
//	//故数组在内存中是连续存放的
//	return 0;
//}//[]:下表引用操作符





//二维数组：
//int main()
//{
//	//int arr1[3][4];//表示三行四列整型类型的值//二维数组的创建
//	//char arr2[4][6];
//	//double arr3[4][5];
//	int arr[3][4] = { 1,2,3,4,5 };//不完全初始化，一行填完后填下一行，默认值为0
//	int arr[3][4] = { {1,2,3},{4,5} };//第一行为1，2，3，0， 第二行为4，5，0，0，第三行为0，0，0，0
//	//char ch[3][4];
//	int arr[][6] = { 1,2,3 };//可以省略行但不能省略列
//	return 0;
//
//}






//二维数组的访问
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
//			printf("&arr[%d][%d]=%p ",i,j,&arr[i][j]);//二维数组在内存中和一维数组一样也是连续存放的
//
//		}//当行数确定时，访问该行的第几列类似与一维数组的访问：arr[0][j] 
//		printf("\n");
//	}
//	return 0;
//}









//数组作为函数参数
//例————冒泡排序：
void bubble_sort(int arr[],int sz)//理解此时的数组可以作为指针
{
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);--该位置为错误示范
	for (i=0;i<sz-1;i++)
	{
		int flag = 1;//假设这一趟排序已经有序
		//每一趟冒泡排序
		int j = 0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据不完全有序
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
	bubble_sort(arr,sz);//arr是数组，数组传参，实际上传过去的是素组arr的首元素地址: &arr[0]
	int k = 0;
	for (k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++)
	{
		printf("arr[%d]=%d\n", k, arr[k]);
	}
	return 0;
}




