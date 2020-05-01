#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 100    //最大行数
#define MAX 100  //最大列数
int sushu(int n) //定义素数函数
{
    int i, flag = 2;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    return flag;
}
void link(char str[][MAX], int sum[N], int n)
{
    int i, j, count = 0, num = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < strlen(str[i]); j++)
        {
            if (str[i][j] >= '0' && str[i][j] <= '9')
            {
                count++;
            }
        }
        for (j = 0; j < strlen(str[i]); j++)
        {
            if (str[i][j] >= '0' && str[i][j] <= '9')
            {
                sum[i] = sum[i] + (str[i][j] - '0') * pow(10, (count - num));
                num++;
            }
        }
    }
}
int max(int n)
{
    int i;
    if (n == 0)
        return 0;
    else if (sushu(n) == 2)
        return n;
    else
    {
        for (i = n - 1; i >= 0; i--)
            if (n % i == 0)
                break;
        return i;
    }
}
int main(void)
{
    char str[N][MAX] = {'\0'};
    int i, j, flag = 0, sum[N] = {0};
    while (scanf("%s", str[i]) != EOF)
        i++;
    int n = i;
    link(str, sum, n);
    for (i = 0; i < n; i++)
        printf("%d\n", max(sum[i]));
    return 0;
}
