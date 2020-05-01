#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isoperator(char ch){
    if(ch<'0' || ch>'9') return 1;
    else                 return 0;
}
int main(void){
    char a[10],b[10],c[10],op;
    int n1,n2,result;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    if(strlen(a)==1 && isoperator(a[0])==1){
        op=a[0];
        n1=atoi(b);
        n2=atoi(c);
    }
    else if(strlen(b)==1 && isoperator(b[0])==1){
        op=b[0];
        n1=atoi(a);
        n2=atoi(c);
    }
    else{
        op=c[0];
        n1=atoi(a);
        n2=atoi(b);
    }
    switch(op){
        case '+':result=n1+n2;break;
        case '-':result=n1-n2;break;
        case '*':result=n1*n2;break;
        case '/':result=n1/n2;break;
        case '%':result=n1%n2;break;
        default:break;
    }
    printf("%d\n",result);
    return 0;
}
/* 问题描述
求一个表达式的值。表达式由两个非负整数x，y和一个运算符op构成。这两个整数和运算符的顺序是随机的，可能是”x op y”， “op x y”或者 “x y op”，例如，“25 + 3”表示25加3，“5 30 *” 表示5乘以30，“/ 600 15”表示600除以15。
输入说明
输入为一个表达式，表达式由两个非负整数x，y和一个运算符op构成，x，y和op之间以空格分隔，但顺序不确定。x和y均不大于10000000，op可以是+，-,*，/，%中的任意一种，分表表示加法，减法，乘法，除法和求余。除法按整数除法求值，输入数据保证除法和求余运算的y值不为0。
输出说明
输出表达式的值。
输入样例
样例1输入
5 20 *
输出样例
样例1输出
100 */