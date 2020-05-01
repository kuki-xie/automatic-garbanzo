#include<stdio.h>
struct Date //定义一个结构体变量
{
    int year;
    int month;
    int day;
}date;

int number(int year,int month,int day) //函数days 判断该日是本年的第几天
{
    int sum=0,i;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //数组a中存放12个月的天数
    for ( i = 0; i<month-1; i++)
    {
        sum+=a[i];
    }
    sum=sum+day;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) //判断该年是否是闰年
    {
        if (month > 2)// 若是在天数上加1；
            sum= sum + 1;
        else
            sum = sum;
    }
    else
        sum = sum ;
    return sum; //返回sum;
}
int main(void)
{
    int sum;
    scanf("%d/%d/%d", &date.year, &date.month, &date.day);
    sum=number(date.year, date.month, date.day); // 调用days函数；
    printf("%d\n%d\n%d\n%d\n",date.year,date.month,date.day,sum);
    return 0;
}    

