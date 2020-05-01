#include <stdio.h>
int main(void)
{
    int a[2][3] = {0}, b[3][2] = {0}, c[2][2] = {0};
    int i, j, k;
    for (i = 0; i < 2; i++) //输入a数组
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++) //输入b数组
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < 2; i++) //计算矩阵c
        for (j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)

                c[i][j] += a[i][k] * b[k][j];
        }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}