#include<stdio.h>
int main(void)
{
    char a[20];
    int i,n;
    for(i=0;;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]=='\n') break;
    }
    a[i]='\0';
    n=i;
    if(a[0] >= 'a' && a[0] <= 'z') a[0]=a[0]-32;
    else a[0]=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1] >= 'a' && a[i+1] <= 'z') a[i+1]=a[i+1]-32;
            else a[i+1]=a[i+1];
        }  
    }
    for(i=0;i<n;i++)
        printf("%c",a[i]);
}

/* 	
问题描述
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