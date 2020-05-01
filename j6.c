#include <stdio.h>
typedef struct Money //定义结构体
{
    int code;
    int sum;
    float end;

} money;
int sushu(int n) //判断素数单独一个程序
{
    int i, sum = 0;
    if (n == 0 || n == 1)
        return 0;
    for (i = 2; i < n / 2; i++)
        if (n % i == 0)
            sum++;
    if (sum == 0)
        return 1;
    else
        return 0;
}
int main(void)
{
    int i, j, n, sum = 0;
    scanf("%d", &n);
    money temp;
    money m[2000];
    for (i = 0; i < n; i++)
        scanf("%d %d %f", &m[i].code, &m[i].sum, &m[i].end);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
        {
            if (m[j].code > m[j + 1].code)
            {
                temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    for (i = 0; i < n; i++)
        if (sushu(m[i].sum) == 1)
        {
            sum++;
            printf("%d %d %.2f\n", m[i].code, m[i].sum, m[i].end);
        }
    if (sum == 0)
    {
        for (i = 0; i < n; i++)
            printf("%d %d %.2f\n", m[i].code, m[i].sum, m[i].end);
    }
    return 0;
}
