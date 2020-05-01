```c
#include<stdio.h>
#include<math.h>
int fun(int a)
{
    int sum=0,n=0;
    int t=a;
    while(t)
    {
        t/=10;n++;    //判断位数
    }
    t=a;
    while(t)
    {
        sum+=pow(t%10,n);   //把每位数三次方
        t/=10;
    }
    return sum==a;  //判断是否为水仙花数，不是为0，是为1
}
int main()
{
    int a,k=0,i;
    scanf("%d",&a);
    for(i=100;i<=a;i++)
    {
        if(fun(i)==1)
        {
            k++;printf("%d ",i);
        }
    }
    if(k==0) printf("no\n");
    return 0;
}
```
