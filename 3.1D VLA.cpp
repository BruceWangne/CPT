//����ˮӡ,������,BruceWangne,2018.01.24
//ͷ��ע��Ϊ����˵������,�����ɷ���
//һάVLC����
//�������ȡ��C primer plus �ڶ�������, �Ժ�Ĵ�������Դ�Ϊģ��!
#define _CRT_SECURE_NO_WARNINGS//����ע��fopen�ı���
#include <stdio.h>//����ͷ
#include <conio.h>//������getch,δ���Ժ�
#include <stdlib.h>//������system
#include <windows.h> //������sleep
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
		//double mt[10];//���峤��Ϊ10��һά����,[]��ֻ��Ϊ�������Ѷ����ȫ�ֱ��������Ƽ�
		double * p = (double *)malloc(sizeof(double)*n);//���峤��Ϊn��һά���飬�Ƽ�
		for (i = 1; i <= n; i++)
		{
			p[i] = i - 1;
		}
		sum = total(p, n);
		printf("%f\n", sum);
	}

	system("echo �����Ǳ���ʱ��%time%");
	printf("I am a simple ");
	printf("computer.\n");
	system("pause");//���ͣ!!!
	return 0;
}
