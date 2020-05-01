#include<stdio.h>
int main(void)
{
    char s[100];
    int i;
    for(i=0;;i++)
    {
        scanf("%c",&s[i]);
        if(s[i]=='\n'||s[i]=='\r') break;
    }
    s[i]='\0';
    int n=i;
    for(i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=('A'+'Z')-s[i];
        else if(s[i]>='a'&&s[i]<='z')
            s[i]=('a'+'z')-s[i];
    }
    for(i=0;i<n;i++)
        printf("%c",s[i]);
    return 0;
}
/* 问题描述
有一行电文，已按下面规律译成密码：
A-->Z a-->z
B-->Y b-->y
C-->X c-->x
… …
即第1个字母变成第26个字母，第i个字母变成第（26-i+1）个字母……非字母字符不变。要求编程将密码译回原文。
输入说明
输入一行电文，电文长度不超过100个字符。
输出说明
输出一行原文。
输入样例
样例1输入
R droo erhrg Xsrmz mvcg dvvp.
输出样例
样例1输出
I will visit China next week. */