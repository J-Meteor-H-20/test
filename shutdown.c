#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑在一分钟内关机，如果输入：逆流星最帅，就取消关机\n请输入>:");
	scanf("%s", input);
	if(strcmp(input,"逆流星最帅")==0)
	{
		system("shutdowm -a");
	}
	else
	{
		goto again;
	}
	return 0;
}