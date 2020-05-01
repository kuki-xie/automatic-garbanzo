#include<stdio.h>
#define M 100
int row, col, inx, iny;
void MinMax(int A[M][M])
{
	int flag=0;
	int min[M], max[M];
	for (int i = 0; i < row; i++)  //求出每一行中最小的，存在min[M]中
	{
		min[i] = A[i][0];
		for (int j = 1; j < col; j++)
			if (min[i]>A[i][j])
				min[i] = A[i][j];
	}
	for (int i = 0; i <row; i++)  //求出每一列中最大的，存在max[N]中
	{
		max[i] = A[0][i];
		for (int j = 1; j < col; j++)
			if (max[i] < A[j][i])
				max[i] = A[j][i];
	}
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (min[i] == max[j])  //找到马鞍点
			{
				printf("%d %d %d\n", i, j, A[i][j]);
				flag = 1;
			}
	if (flag == 0)
		printf("no\n");
}
int main()
{
	int data[M][M];
	while (scanf("%d %d", &row, &col) != EOF)
	{
		
		for (inx = 0; inx < row; inx++)
			for (iny = 0; iny < col; iny++)
			{
				scanf("%d", &data[inx][iny]);
			}
		MinMax(data);
	}
	return 0;
}

/* 问题描述
请写一个程序，找出给定矩阵的马鞍点。若一个矩阵中的某元素在其所在行最小而在其所在列最大，则该元素为矩阵的一个马鞍点。
输入说明
输入数据由m+1行构成，第一行只有两个整数m和n（0<m<100,0<n<100），分别表示矩阵的行数和列数，接下来的m行、每行n个整数表示矩阵元素（矩阵中的元素互不相同），整数之间以空格间隔。
输出说明
在一行上输出马鞍点的行号、列号（行号和列号从0开始计数）及元素的值（用一个空格分隔），之后换行；若不存在马鞍点，则输出一个字符串“no”后换行。
输入样例
4 3
11 13 121
407 72 88
23 58 1
134 30 62
输出样例
1 1 72 */