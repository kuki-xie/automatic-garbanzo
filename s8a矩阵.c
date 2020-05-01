#include<stdio.h>
int main(void)
{
    int i,j,a[20][20],num[50],m;
    int sum,n=0;
    scanf("%d\n",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)    //计算行之和
    {
        sum=0;
        for(j=0;j<m;j++)
            sum+=a[i][j];
        num[n++]=sum;
    }
    for(j=0;j<m;j++)  //计算列之和
    {
        sum=0;
        for(i=0;i<m;i++)
            sum+=a[i][j];
        num[n++]=sum;
    }
    sum=0;
    for(i=0,j=0;i<m;i++,j++)  //计算主对角线之和
        sum+=a[i][j];
    num[n++]=sum;
    sum=0;             //将sum重新赋值为0;
    for(i=0,j=m-1;i<m;i++,j--)
        sum+=a[i][j];
    num[n++]=sum;
    for(i=0;i<n;i++)    //计算辅对角线之和;
    {
        for(j=0;j<n-i;j++)
        {
            if(num[j]<num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",num[i]);
    printf("\n");
    return 0;
}

