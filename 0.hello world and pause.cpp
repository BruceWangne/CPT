#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	printf("Hello World��\n");//"\n"��һ��ת���ַ�����ʾ�س�����
	//*********************************************************��ͣ����**********************************************************
	//getchar();//Ҫ��������һ�ַ����Դﵽ��ͣ�����ֹ�Զ��˳�Ŀ��
	//getch();//��ͣ��һ,��Ҫconio.h��ò���е�����
	//getchar()��getch()�����÷�һ��,�����getchֱ�ӴӼ��̻�ȡ��ֵ,���ȴ��û����س�,ֻҪ�û���һ����,getch�����̷���
	//wait(10000);
	system("pause 10");//ʹ��ϵͳcmd���pause,ʹ��system��Ҫ����ͷstdlib.h
	//*********************************************************��ͣ����**********************************************************
	//*********************************************************����CMD**********************************************************
	//system("ipconfig");
	system("echo I love Windows!");//system��˵���ǵ���ϵͳpower shell��cmd������,�޷����������
	system("pause");//���ͣ������
	//*********************************************************����CMD**********************************************************
	return 0;
}