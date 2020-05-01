```c
#include<stdio.h>
#include<string.h>
void dele(char str[],char ch,int n)
{
    int i,j=0;
    char a[50];
    for(i=0;i<n;i++)
    {
        if(str[i] == ch)
            continue;
        else a[j++]=str[i];
    }
    a[j]='\0';
    for(i=0;i<j;i++)
        printf("%c",a[i]);
}
int main(void)
{
    char str[50],ch;
    int i,n;
    for(i=0;;i++)
    {
        scanf("%c",&str[i]);
        if(str[i]=='\n') break;
    }
    str[i]='\0';
    n=i;
    scanf("%c",&ch);
    dele(str,ch,n);
    return 0;
}
/* 问题描述
主函数中输入一个一维字符数组str[N]（N≤50）和待删除字符ch，调用函数dele()完成内容：1、删除字符数组中的每个待删除字符；2、其它字符依次迁移；3、数组末尾加'\0'结束。
输入说明
输入一个一维字符数组和待删除字符。
输出说明
格式输出：输出处理后字符串。
输入样例
There are three men.
e
输出样例
Thr ar thr mn. */
```
