/*数字处理*/
#include<stdio.h>
int add(int n)
{
  //  printf("%d\n",n);
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
  //  printf("%d\n",sum);
    if(sum>10)
    {
        sum=add(sum);
    }
    return sum;
}
int main(void)
{
    int n,i,t,len=0;
    int a[1000000];
    scanf("%d\n",&n);
    while(n > 0)
    {
        a[len] = add(n);
        len++;
    //    printf("%d\n",add(n));
        scanf("%d\n",&n);
     //   if(n == 0) break;
    }
    for (int i = 0; i < len; i++)
    {
       printf("%d\n",a[i]);
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
3 */