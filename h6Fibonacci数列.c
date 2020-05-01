#include<stdio.h>
int fab(int n)
{
   if(n==0) return (7);
   else if(n==1) return (11);
   else return (fab(n-1)+fab(n-2));
}
int main(void)
{
    int i,t,a[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        if(fab(a[i])%3==0) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
/* 问题描述
有一种形式的Fibonacci数列定义如下：
F(0)=7
F(1)=11
F(n)=F(n-1)+F(n-2)（n>=2）
给定n值，判断F(n)是否能被3整除。要求用递归法。
输入说明
多组数据，输入数据第一行为正整数t(0<t<100)，表示数据组数，其后为t行，每行一个整数n（0<=n<=50）。
输出说明
对于每组数据，如果F(n)能被3整除输出“yes”否则输出“no”。
输入样例
3
1
2
3
输出样例
no
yes
no */