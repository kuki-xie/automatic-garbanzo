#include<stdio.h>
int main(void)
{
    char ch;
    int a[100],i,j,m;
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        scanf("%c",&ch);
        if(ch=='\n'||ch=='\r') break;
    }
    int n=i+1;  //读取最后一个字符
    scanf("%d",&m);
    for(i=0;i<m-1;i++)
        for(j=0;j<m-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
/* 问题描述
定义一个一维整数数组A，在一行中输入N个整数（换行符表示输入结束，N < 100）存入数组A，对数组A中的前M个元素做从小到大排序，数组其它元素保持不变。
输入说明
第一行输入一串整数，第二行输入一个整数M。
输出说明
格式输出：输出部分排序后的新数组元素。
输入样例
30 2 1 4 5
3
输出样例
1 2 30 4 5 */