#include<stdio.h>
int main(void)
{
    int a[80];
    int i, max=0,n,wei;
    scanf("%d\n",&n); //整形数据n
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
            wei=i;
        }
    }
    printf("%d %d %d",n,max,wei);
    return 0;
}
/* 问题描述
输入整数N（N≤80），输入一维行向量A[N]各元素值，查找出其中最大值并记录位置信息，输出N、最大值和位置信息， 数据之间空一格空格。
输入说明
输入整形数据N和行向量各元素值，如8和行向量元素A={1,2,3,4,5,6,7,8}。
输出说明
格式输出：输出N、最大值和位置信息，数据之间空一格。
输入样例
8
1 2 3 4 5 6 7 8
输出样例
8 8 7 */