#include<stdio.h>
int add(int n) //模块化
{
    int sum=0;
    if(n/10==0) return n;
    else
    {
        while(n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        return add(sum);
    }
}
int main(void)
{
    int a[1000],i;
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0) break;
    }
    int m=i;
    for(i=0;i<m;i++)
    {
        printf("%d\n",add(a[i]));
    }
    return 0;
}
/* 问题描述
编写一个程序，从键盘输入n个非零整数（0 < n <= 1000000），对每个整数n进行如下处理：将整数的各位数字取出来相加，如果结果是一位数则输出该数，否则重复上述过程，直到得到的结果为一位数，并输出该结果。要求使用递归法。
输入说明
多组数据，每行一个整数，输入为0时表示输入结束。
输出说明
输出每个整数的处理结果，然后换行。
输入样例
24
39
0
输出样例
6
3  */