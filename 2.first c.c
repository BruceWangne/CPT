//万恶的水印,啦啦啦,BruceWangne,2018.01.24
//头部注释为代码说明部分,可自由发挥
//first c
//基本框架取自C primer plus 第二章历程, 以后的代码均须以此为模板!
#define _CRT_SECURE_NO_WARNINGS//用于注释fopen的报错
#include <stdio.h>//基本头
#include <conio.h>//初见于getch,未调试好
#include <stdlib.h>//初见于system
#include <windows.h> //初见于sleep
#include<dos.h> 
int main(void)
{
	int num;
	num = 1;
	printf("Hello World!");
	system("echo 现在是北京时间%time%");
	system("pause");//最爱暂停!!!
	return 0;
}
