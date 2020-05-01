#include<stdio.h>
typedef struct Complex
{
    float real; //定义实部
    float image;    //定义虚部
} complex;
int main(void)
{
    int n,i;
    float sum1=0,sum2=0;
    complex a[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&a[i].real,&a[i].image);
        sum1+=a[i].real;
        sum2+=a[i].image;
    }
    if(sum2>0) printf("%.2f+%.2fi",sum1,sum2);
    else printf("%.2f%.2fi",sum1,sum2);
    return 0;
}
/* 问题描述
多个复数以结构体的方式存储，输出这些复数的和。
输入说明
第一行为一个正整数N(0<N<=100)，表示复数的个数。
第二行开始为N只复数的输入数据，每一行的二个数分别代表复数的实部和虚部，各部分之间用空格分隔。
输出说明
输出全部复数的累加和，各部分保留小数点后2位。
输入样例
3
2.6 4.5
123 -456.8
-56 157
输出样例
69.60-295.30i  */