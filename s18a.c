#include<stdio.h>
#include<math.h>
int main(void)
{
    char s[30],op;
    int a[2]={0},i,j,t=-1;
    for(i=0;;i++)
    {
        scanf("%c",&s[i]);
        if(s[i]=='\n') break; //输入字符串
    }
    s[i]='\0';
    int n=i;
    for(i=0;i<n;i++)
    {
        int num=0; //位数先定为0
        if(s[i] >= '0' && s[i] <= '9')
        {
            num++; //位数增加
            t++; //个数增加
            i++; 
            while(s[i] >= '0' && s[i] <='9') //判断是几位数
            {
                num++; //位数增加
                i++;
            }
            for(j=0;j<num;j++)
                a[t]+=pow(10,j) * (s[i-j-1]-'0');
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%')
            op=s[i];
    }
    switch(op)
    {
        case '+': printf("%d",a[0]+a[1]);break;
        case '-': printf("%d",a[0]-a[1]);break;
        case '*': printf("%d",a[0]*a[1]);break;
        case '/': printf("%d",a[0]/a[1]);break;
        case '%': printf("%d",a[0]%a[1]);break;
    }
    return 0;
}