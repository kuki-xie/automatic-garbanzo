#include<stdio.h>
#include<string.h>
void name(char a[],char b[],int n)
{
    int i;
    if(b[0] >= 'a' && b[0] <= 'z')
        b[0]=a[0]-('a'-'A');
    else b[0]=a[0];
    
    for(i=1;i<n;i++)
    {
        if(a[i-1]==' ')
        {
            if(a[i] >= 'a' && b[i] <= 'z')
                b[i]=a[i]-('a'-'A');
            else b[i]=a[i];
        }
        else b[i]=a[i];
    }
}
int main(void)
{
    char a[20],b[20];
    int i;
    for(i=0;;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]=='\n') break;
    }
    a[i]='\0';
    int n=i;
    name(a,b,n);
    for(i=0;i<n;i++)
        printf("%c",b[i]);
    return 0;
}
/* 问题描述
编写一个程序，从键盘任意输入一个人的英文名和姓，然后将其名和姓的第一个字母都变成大写字母。例如，如果用户输入john smith，其中john为名，smith为姓，则屏幕显示John Smith。
输入说明
输入一个姓名字符串，包含名和姓，名和姓之间以一个空格分隔。
输出说明
输出的姓名字符串，首字母大写。
输入样例
样例1输入
John smith
输出样例
样例1输出
John Smith  */