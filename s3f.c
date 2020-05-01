#include<stdio.h>
int main(void)
{
    int a[20],i,j,m;
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        if(getchar()=='\n') break;
    }
    int n=i+1;  //读取最后一个字符
    scanf("%d",&m);
    for(i=0;i<m-1;i++)
        for(j=0;j<m-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}