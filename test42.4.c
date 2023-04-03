#define _CRT_SECURE_NO_WARNINGS 1
//生活不是一种宿命，而是一种选择
#include<stdio.h>
//文件：程序文件，数据文件
//我们把信息输出到磁盘上，当需要时再从磁盘上把数据读取到内存中使用，这里处理的就是磁盘上的文件
#include<string.h>
#include<errno.h>
int main()
{
	//FILE* pf = fopen("test.txt", "r");//相对路径，在当前的目录表上去找
	FILE* pf = fopen("C:\\Users\\HanKing\\Desktop\\test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
//文件读写常用的函数：fgetc(读一个字符),fputc(写一个字符),fgets(读一行),fputs(写一行)
//读即为输入，写即为输出
//fscanf(格式化输入),fprintf(格式化输出),fread(二进制输入),fwrite(二进制输出)
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//写文件
	int i = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		fputc(i, pf);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//与下面的perror()功能相同
		//分为两步，第一个是strerror(errno)获得错误信息，然后printf函数打印出来
		perror("renyizizfuchuan");//中间的是任意字符串//直接打印错误信息
		return 1;
	}
	//读文件
	
	int i = 0,ch;
	for (i = 'a'; i <= 'z'; i++)
	{
		int ch=fgetc(pf);
		if(ch!=EOF)
			printf("%c ", ch);
	}

	int ch;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
struct S {
	char name[20];
	int age;
	float score;
};
int main()
{
	struct S s = { "niliuxin",20,408.0f};
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror(fopen);
		return 1;
	}
	fprintf(pf,"%s,%d,%f", s.name, s.age, s.score);
	fscanf(pf,"%s,%d,%f", s.name, &(s.age), &(s.score));
	printf("%s,%d,%f\n", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}