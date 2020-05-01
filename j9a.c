#include<stdio.h>
int main(void)
{
    int n,m,i;
    int a[1000]={0},b[1000]={0},j=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]); //完成输入
    if(m < a[0])
    {
        b[0]=m;
        for(i=1;i<=n;i++)
            b[i]=a[i-1];
    }
    else if(m > a[n-1])
    {
        for(i=0;i<n;i++)
            b[i]=a[i];
        b[n]=m;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(m > a[i] && m < a[i+1])
            {
                b[j++]=a[i];
                b[j++]=m;
            }
            else b[j++]=a[i];
        }
    }
    for(i=0;i<n+1;i++)
        printf("%d ",b[i]);
    return 0;
}