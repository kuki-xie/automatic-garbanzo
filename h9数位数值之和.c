#include<stdio.h>
int main(void)
{
    int n,i=0,sum=0;
    int a[1000000];
    scanf("%d",&n);
    while(n)
    {
        a[i]=n%10;
        sum+=a[i];
        n/=10,i++;
    }
    int t=i;
    for(i=0;i<t;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("%d",sum);
    return 0;
}
/* 问题描述
输入一个N位正整数（0<N<1000000），分解出各个数位数值，求各个数位数值之和，并从高位到低位输出各个数位数值及其和。要求用递归法。

输入说明
输入N（0<N<10000000）位整数，如12345。
输出说明
第一行从低位到高位输出各个数位，各输出之间用空格分隔。
输入样例
12345
输出样例
5 4 3 2 1
15 */