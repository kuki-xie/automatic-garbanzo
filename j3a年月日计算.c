#include<stdio.h>
struct Date //定义一个结构体变量
{
    int year;
    int month;
    int day;
} date;

int number(int year,int month,int day)
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=0,i;
    for(i=0;i<month-1;i++)
        sum+=a[i];
    sum+=day;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) //判断是否为闰年
    {
        if(month>2) //若是在天数上加1
            sum+=1;
        else sum=sum;
    }
    else sum=sum;
    return sum;
}
int main(void)
{
    int sum;
    scanf("%d/%d/%d",&date.year,&date.month,&date.day);
    sum=number(date.year,date.month,date.day);
    printf("%d\n%d\n%d\n%d\n",date.year,date.month,date.day,sum);
    return 0;
}
/* 问题描述
定义一个结构体变量，包括年、月、日。计算该日在本年中是第几天，并将其存放在此结构体成员变量中。
输入说明
输入结构体变量中的年月日。输入格式：年/月/日
输出说明
分行输出结构体的所有成员。
输入样例
2019/7/21
输出样例
2019
7
21
202 */