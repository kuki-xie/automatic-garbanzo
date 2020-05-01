#include<stdio.h>
#include<math.h>
int main(void)
{
    char s[100],op;
    int i,j,a[2]={0},t=-1;
    for(i=0;;i++)   //输入字符串
    {
        scanf("%c",&s[i]);
        if(s[i]=='\n') break;
    }
    s[i]='\0';
    int n=i;
    int num;
    for(i=0;i<n;i++)
    {
        num=0;  //判断有几位数
        if(s[i] >= '0' && s[i] <= '9')  //如果第一个是数字
        {
            num++; //位数增加
            t++;  //判断第几个数字
            i++; 
            while(s[i] >= '0' && s[i] <= '9')   //在第一个是数字的前提判断几位
            {
                i++;
                num++;
            }
        }
        for(j=0;j<num;j++)  //把字符型转换成整型
            a[t]+=pow(10,j) * (s[i-j-1]-'0');

        if(s[i] == '+' || s[i]== '-' || s[i] == '*' || s[i] == '/' ||s[i] == '%')
            op=s[i];
    }
    switch(op)
    {
        case '+': printf("%d",a[0] + a[1]); break;
        case '-': printf("%d",a[0] - a[1]); break;
        case '*': printf("%d",a[0] * a[1]); break;
        case '/': printf("%d",a[0] / a[1]); break;
        case '%': printf("%d",a[0] % a[1]); break;
    }
    return 0;   
}