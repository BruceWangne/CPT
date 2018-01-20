#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>//基本头
#include <conio.h>//初见于getch,未调试好
#include <stdlib.h>//初见于system
#include <windows.h> //初见于sleep
#include<dos.h> 
int main()
{
	system("echo 现在是北京时间%time%");//最爱暂停!!!
	//*********************************************************文件操作*********************************************************
	double i = 10;
	FILE*fp;
	fp = fopen("out.dat", "w");//需要在项目属性-c/c++-预处理器-预处理器定义中添加_CRT_SECURE_NO_WARNINGS或在首行添加语句： #define _CRT_SECURE_NO_WARNINGS 推荐后者
	//fopen中w意为覆盖输出，a+以为在后输出
	fprintf(fp, "hhhhhhhhhh \n", i);//文件输出
	fprintf(fp, "hhhhhhhhhah \n", i);//文件输出
	fclose(fp);
	//*********************************************************文件操作*********************************************************
	system("pause");//最爱暂停!!!
	return 0;
}