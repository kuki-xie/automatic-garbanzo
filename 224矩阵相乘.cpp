#include <stdio.h>
#include <string.h>
int main()
{
	int a[2][3];
	int b[3][2];
	int c[2][2] = {0, 0, 0, 0};
	int i, j, k;
	int num = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", c[i][j]);
			num++;
			if (num % 2 == 0)
				printf("\n");
		}
	}
	return 0;
}
