//万恶的水印,啦啦啦,BruceWangne,2018.03.14
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
#include<mkl.h>//intel MKL 
//使用MKL注意事项： 参考 http://blog.csdn.net/zb1165048017/article/details/70141432
//1.项目-右键->属性->Intel Performance Librarys->use Intel MKL，选择Parallel
//2.在C/C++->代码生成->运行库，直接选择多线程(/MT)
//#include "cpt_prepare.h"

#define N 10
#define t 0.5
#define lmd 1.73
#define delt 0.03846
#define zeta3 1.20206
/*
float main(void)
{
double inte;
int n, i;
n = 10;
printf("%d\n", n);
system("echo 现在是北京时间%time%");
printf("I am a simple ");
printf("computer.\n");
system("pause");//最爱暂停!!!
return 0;
}
*/

int main()
{
	double *A, *B, *C;
	int m, n, k, i, j;
	double alpha, beta;

	printf("\n This example computes real matrix C=alpha*A*B+beta*C using \n"
		" Intel(R) MKL function dgemm, where A, B, and  C are matrices and \n"
		" alpha and beta are double precision scalars\n\n");

	m = 2000, k = 200, n = 1000;
	printf(" Initializing data for matrix multiplication C=A*B for matrix \n"
		" A(%ix%i) and matrix B(%ix%i)\n\n", m, k, k, n);
	alpha = 1.0; beta = 0.0;

	printf(" Allocating memory for matrices aligned on 64-byte boundary for better \n"
		" performance \n\n");
	A = (double *)mkl_malloc(m*k * sizeof(double), 64);
	B = (double *)mkl_malloc(k*n * sizeof(double), 64);
	C = (double *)mkl_malloc(m*n * sizeof(double), 64);
	if (A == NULL || B == NULL || C == NULL) {
		printf("\n ERROR: Can't allocate memory for matrices. Aborting... \n\n");
		mkl_free(A);
		mkl_free(B);
		mkl_free(C);
		return 1;
	}

	printf(" Intializing matrix data \n\n");
	for (i = 0; i < (m*k); i++) {
		A[i] = (double)(i + 1);
	}

	for (i = 0; i < (k*n); i++) {
		B[i] = (double)(-i - 1);
	}

	for (i = 0; i < (m*n); i++) {
		C[i] = 0.0;
	}

	printf(" Computing matrix product using Intel(R) MKL dgemm function via CBLAS interface \n\n");
	cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans,
		m, n, k, alpha, A, k, B, n, beta, C, n);
	printf("\n Computations completed.\n\n");

	printf(" Top left corner of matrix A: \n");
	for (i = 0; i<min(m, 6); i++) {
		for (j = 0; j<min(k, 6); j++) {
			printf("%12.0f", A[j + i*k]);
		}
		printf("\n");
	}

	printf("\n Top left corner of matrix B: \n");
	for (i = 0; i<min(k, 6); i++) {
		for (j = 0; j<min(n, 6); j++) {
			printf("%12.0f", B[j + i*n]);
		}
		printf("\n");
	}

	printf("\n Top left corner of matrix C: \n");
	for (i = 0; i<min(m, 6); i++) {
		for (j = 0; j<min(n, 2); j++) {
			printf("%12.5G ", C[j + i*n]);
		}
		printf("\n");
	}

	printf("\n Deallocating memory \n\n");
	mkl_free(A);
	mkl_free(B);
	mkl_free(C);

	printf(" Example completed. \n\n");
	system("pause");//最爱暂停!!!
	return 0;
}
