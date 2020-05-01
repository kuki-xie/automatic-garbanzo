```c
#include<stdio.h>
int iswanshu(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)  sum+=i;
    }
    return sum==n;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(iswanshu(i))
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}
/* 问题描述
完全数是一些特殊的自然数，它所有的真因子(即除了自身以外的约数)的和，恰好等于它本身。找出[1,N]间的所有完数。要求用自定义函数判定完数。
输入说明
通过键盘输入一个整数N，N介于1和100000之间。
输出说明
在一行上输出[1,N]间的所有完数，两数之间用空格分隔。
输入样例
1000
输出样例
6 28 496  */
```
