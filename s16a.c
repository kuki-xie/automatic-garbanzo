#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char str[1000];
    scanf("%s",str);
    int a=atoi(str);
    printf("%d %o %x",a,a,a);
    return 0;
}
/* 问题描述
编写程序，输入一个数字字符串，输出该字符串对应整数，分别输出其十进制、八进制和十六进制数。
输入说明
输入一个数字字符串。
输出说明
输出三个整数，分别为转换后整数的十进制、八进制和十六进制表示，数据之间以空格间隔。
输入样例
样例1输入
256
输出样例
样例1输出
256 400 100
*/