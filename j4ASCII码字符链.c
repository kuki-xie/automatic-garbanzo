#include<stdio.h>
int main(void)
{
    char s[1000],str[1000],ch;
    int i,t=0,num;
    for(i=0;;i++)
    {
        scanf("%c",&s[i]);
        if(s[i]=='\n') break;
    }
    int n=i;
    s[i]='\0';
    scanf("%c",&ch);
    for(i=0;i<n;i++)    
    {
        if(ch==s[i]) t++;   //判读是否找到该字符
        else str[num++]=s[i];//将剩余字符放入新数组
    }
    if(t==0) printf("Did not find");
    else
    {
        for(i=0;i<num;i++)
            printf("%c",str[i]);
    }
    return 0;
}
/* 问题描述
可用单链表将单个字符连接起来组成一篇文章，这样的结构有利于文字的插入、删除、查找、编辑及组织。构建这样的链表，并从头开始查找链表中第一个个出现的要查找字符，查到了，从链表中删除该字符，未查到则输出“Did not find”。
输入说明
第一行为一行N个字符（0<N<1000）的输入，换行键表示输入结束。将这些字符按照上述要求组成链表。
第二行输入一个字符，表示要查找的字符（区分大小写）。
输出说明
查找到了，删除该字符，并输出剩余的全部字符。
未找到，输出：Did not find
输入样例
No matter what, as long as The work hard struggle, is not successful.
T
输出样例
No matter what, as long as he work hard struggle, is not successful.  */