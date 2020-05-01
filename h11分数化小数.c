#include <stdio.h>
int main()
{ 
    int i,a,b,c; 
    scanf("%d %d %d",&a,&b,&c);    //输入被除数、除数及小数位数
    int p[c+2];
    p[0]=a/b;                      //商的整数部分
    a=a%b*10;                      //模拟手算除法计算余数
    for(i=1; i<c+2; i++)           //先计算前c-1位小数并输出
    {
        p[i]=a/b;                  //计算一位小数
        a=a%b*10;                  //准备下一轮计算
    }
    p[c]+=p[c+1]>4;                //第c+1位四舍五入
    for(i=c; i>0&&p[i]>9; i--)     //处理进位
    { 
        p[i-1]++;
        p[i]-=10;
    }
    printf("%d.",p[0]);            //输出商的整数部分
    for(i=1; i<=c; i++)    
        printf("%d",p[i]);
    return 0;
}