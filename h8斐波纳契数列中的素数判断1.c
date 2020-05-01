#include<stdio.h>
int fib(int n) //模块化
{
    if(n==1||n==2) return 1;
    else           return fib(n-2)+fib(n-1);
}
int sushu(int n) //判断素数
{
    int i,t;
    if(n==1)     return 0;
    else
    {
        for(i=2;i<=n/2;i++)
            if(n%i==0) t++;
        if(t==0) return 1;
        else     return 0;
    }
}
int main(void)
{
    int n,a;
    scanf("%d",&n);
    a=fib(n);
    if(sushu(a)==0) printf("%d",a);
    else            printf("yes");
    return 0;
}
/* 问题描述
已知一个斐波纳契数列中的数字依次为1, 1, 2, 3, 5, 8, 13, 21, 34, 55 … 。请判断该数列中第n个数字（n从1开始计数）是不是素数。
输入说明
输入一个整数n（1<n<40）。
输出说明
判断斐波纳契数列中的第n个数字是不是素数，如果是输出yes，否则输出该数字。
输入样例
6
输出样例
8  */