#include<stdio.h>
int main(void)
{
    char str[50],*psr;
    psr=str;
    int i,num;  //定义卡断位置
    for(i=0;;i++)
    {
        scanf("%c",&str[i]);
        if(str[i]=='\n') break;
    }
    str[i]='\0';
    int n=i;
    scanf("%d",&num);
    for(i=1;i<n-num;i++)
        printf("%c",*(psr+num+i));
    return 0;
}
/* 问题描述
定义一个一维字符数组str[50]，输入一串字符，输入整数位置信息M(M<50)，调用函数char_cp()把指定位置M之后的内容，拷贝到新字符数组ch[50]中，使用指针完成地址传递，主函数完成数组输入和输出。
输入说明
输入一个字符串和整形位置信息，位置M≥0。
输出说明
格式输出：输出处理后字符串ch。
输入样例
There are three men.
6
输出样例
re three men.  */