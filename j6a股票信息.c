#include <stdio.h>
struct Money //定义结构体
{
    int code;
    int sum;
    float end;
};

int sushu(int n) //判断素数单独一个程序
{
    int i, sum = 0;
    if (n == 0 || n == 1)
        return 0; //对0和1的特殊情况进行判断
    for (i = 2; i < n / 2; i++)
        if (n % i == 0)
            sum++;
    if (sum == 0)
        return 1; //是素数就返回1
    else
        return 0; //不是就返回0
}

int main(void)
{
    int i, j, n, sum = 0;
    scanf("%d", &n);
    struct Money temp; //定义Money类型的temp
    struct Money m[2000];
    for (i = 0; i < n; i++) //输入Money成员
        scanf("%d %d %f", &m[i].code, &m[i].sum, &m[i].end);

    for (i = 0; i < n - 1; i++) //先排序
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
/* 问题描述
有N（0<N<=2000）只股票，每只股票的每日收盘信息由股票代码(0, 99999]、交易总量[0, ^31)和收盘价（￥，精确到小数点后二位）构成。
请写一个程序，按照代码升序输出这些股票的信息，输出规则如下
1.当有股票的交易总量为素数时，仅按代码升序输出这些交易量为素数的股票信息。
2.当所有股票交易总量不为素数时，按代码升序输出所有股票的信息。
输入说明
第一行为一个正整数N(0<N<=200)，表示有多少只股票。
第二行开始为N只股票的输入数据，每一行为一只股票的信息，包括股票代码(0, 99999]、交易总量[0, ^31)和收盘价（￥，精确度小数点后二位）三个部分，各部分之间用空格分隔。
输出说明
根据题目给出的规则，输出相应股票信息。每行输出一只股票的信息（股票代码、交易总量、收盘价），各个字段之间用空格分隔。
输入样例
5
235 23679 15.61
1 1013 23.8
125 3037 56.15
9 929 6.7
121 956 65.71
输出样例
1 1013 23.80
9 929 6.70
125 3037 56.15  */