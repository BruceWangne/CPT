#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>//����ͷ
#include <conio.h>//������getch,δ���Ժ�
#include <stdlib.h>//������system
#include <windows.h> //������sleep
#include<dos.h> 
int main()
{
	system("echo �����Ǳ���ʱ��%time%");//���ͣ!!!
	//*********************************************************�ļ�����*********************************************************
	double i = 10;
	FILE*fp;
	fp = fopen("out.dat", "w");//��Ҫ����Ŀ����-c/c++-Ԥ������-Ԥ����������������_CRT_SECURE_NO_WARNINGS��������������䣺 #define _CRT_SECURE_NO_WARNINGS �Ƽ�����
	//fopen��w��Ϊ���������a+��Ϊ�ں����
	fprintf(fp, "hhhhhhhhhh \n", i);//�ļ����
	fprintf(fp, "hhhhhhhhhah \n", i);//�ļ����
	fclose(fp);
	//*********************************************************�ļ�����*********************************************************
	system("pause");//���ͣ!!!
	return 0;
}