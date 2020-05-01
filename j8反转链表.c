#include<stdio.h>
typedef struct Lian
{
    int n;
    int a[100];
} lian;
lian s[1000];
int main(void)
{
    int i,j,m;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&s[i].n);
        for(j=0;j<s[i].n;j++)
            scanf("%d",&s[i].a[j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=s[i].n-1;j>=0;j--)
            printf("%d ",s[i].a[j]);
        printf("\n");
    }
    return 0;
}
/* 问题描述
输入一个链表，反转链表后，输出链表的所有元素。
输入说明
输入第一行为整数n（n>=1),代表测试链表数。
从第二行开始每行表示一个链表，其中第一个数据表示链表中数据个数，其余数据表示要测试的链表中的数据，均为整数。
输出说明
每一行对应一个链表反转后的元素。
输入样例
3
5 1 2 3 4 5
3 2 4 5
1 3
输出样例
5 4 3 2 1
5 4 2
3  */