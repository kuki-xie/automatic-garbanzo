#include<stdio.h>
#include<string.h>
int huiwen(char s[])
{
    int i=0,j=strlen(s)-1;
    while(i < j && s[i] == s[j])
    {
        i++;
        j--;
    }
    if(s[i]!=s[j])
    {
        i--;
        j++;
    }
    if(i >= j) return 1;
    else       return 0;
}
int main(void)
{
    char s[1000]={0};
    int i;
    for(i=0;i<1000;i++)
    {
        scanf("%c",&s[i]);
        if(s[i]=='\n'||s[i]=='\r') break;
    }
    s[i]='\0';
    if(huiwen(s)==1) printf("right");
    else             printf("wrong");
    return 0;
}
/* 问题描述
输入一个字符串，判断其是否为回文(即是否有中心对称关系)。其中，abccba与abcba都可以被判断是回文，而abcfa就不是回文。
输入说明
输入一个字符串。
输出说明
当字符串是回文的时候，输出right；否则输出wrong。
输入样例
样例1输入
abcba
样例2输入
abccba
样例3输入
abcfa
样例4输入
11221
输出样例
样例1输出
right
样例2输出
right
样例3输出
wrong
样例4输出
wrong  */