//万恶的水印,啦啦啦,BruceWangne,2018.01.24
//头部注释为代码说明部分,可自由发挥
//一维VLC数组
//基本框架取自C primer plus 第二章历程, 以后的代码均须以此为模板!
#define _CRT_SECURE_NO_WARNINGS//用于注释fopen的报错
#include <stdio.h>//基本头
#include <conio.h>//初见于getch,未调试好
#include <stdlib.h>//初见于system
#include <windows.h> //初见于sleep
#include <complex> 
#include <dos.h> 
#include "cpt_prepare.h"
float main(void)
{
	double sum;
	int n, i;
	n = 10;
	for (n = 2; n <= 10; n++)
	{
		//double mt[10];//定义长度为10的一维数组,[]中只能为整数或已定义的全局变量，不推荐
		double * p = (double *)malloc(sizeof(double)*n);//定义长度为n的一维数组，推荐
		for (i = 1; i <= n; i++)
		{
			p[i] = i - 1;
		}
		sum = total(p, n);
		printf("%f\n", sum);
	}

	system("echo 现在是北京时间%time%");
	printf("I am a simple ");
	printf("computer.\n");
	system("pause");//最爱暂停!!!
	return 0;
}

