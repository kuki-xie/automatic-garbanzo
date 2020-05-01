#include<stdio.h>
int main(void)
{
    int i,j,n,m;
    int a[100],k=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        int t=0;
        for(j=1;j<=m;j++)
            if(i%j==0)
                t++;
        if(t%2==1)
            a[k++]=i;
    }
    for(i=0;i<k;i++)
        printf("%d ",a[i]);
    return 0;
}