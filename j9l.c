#include<stdio.h>
int main(void)
{
    int n,m,i;
    scanf("%d%d",&n,&m); //输入原长度，和插入小朋友的身高
    int a[1000]={0},b[1000]={0},sum=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(m < a[0]) //如果那个小朋友最矮
    {
        b[0]=m;
        for(i=1;i<n+1;i++)
            b[i]=a[i-1];
    }
    else if(m>a[n-1]) //如果小朋友最高
    {
        for(i=0;i<n;i++)
            b[i]=a[i];
        b[n]=m;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(m >= a[i] && m <=a[i+1]) //如果小朋友中等身高
            {
                b[sum++]=a[i];
                b[sum++]=m;
            }
            else b[sum++]=a[i];
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    printf("%d",b[n]);
    return 0;
}