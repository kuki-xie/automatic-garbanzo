#include<stdio.h>
void sort(int b[],int n)
{
    int i,j,t,k;
    for(j=0;j<n;j++)
    {
        for(k=j,i=j+1;i<n;i++)
        {
            if(b[i]>b[k])
            {k=i;}
        }
        t=b[j];b[j]=b[k];b[k]=t;
    }
}
int main(void)
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    for(i=0;i<n-2;i++)
    {
        if()
    }
}