#include<stdio.h>
int main(void)
{
    int m,a[20][20],num[50];
    int sum,i,j,n=0;
    scanf("%d\n",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)    //记录行的和
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+a[i][j];
        }
        num[n++]=sum;
    }
    for(j=0;j<m;j++)    //记录列的和
    {
        sum=0;
        for(i=0;i<m;i++)
        {
            sum=sum+a[i][j];
        }
        num[n++]=sum;
    }
    sum=0;
    for(i=0,j=0;i<m;i++,j++)   //记录主对角线
    {
        sum=sum+a[i][j];
    }
    num[n++]=sum;
    sum=0;
    for(i=0,j=m-1;i<m;i++,j--)  //记录辅对角线
    {
        sum=sum+a[i][j];
    }    
    num[n++]=sum;
    for(i=0;i<n;i++)
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