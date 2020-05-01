#include<stdio.h>
#include<string.h>
#include<math.h>
int sushu(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0) break;
    }
    if(i>=n/2) return 1;
    else return 0;
}
int zuidayinzi(int n)
{
    int i;
    if(n==0) return 0;
    else if(sushu(n)==1) return n;
    else
    {
        for(i=n-1;i>0;i--)
        {
            if(n%i==0) break;
        }
        return i;
    }
}
int main()
{
    char s[100][100],b[1000]={0};
    int i=0,j,k,t=0,pos=0,count,num;
    while(scanf("%s",s[i])!=EOF)
    {
       pos++;
       i++;
    }
    int sum[100]={0},y[100]={0};
    for(i=0;i<pos;i++)
    {
        count=0; num=0;
        for(j=0;j<strlen(s[i]);j++)
        {
            if(s[i][j]>=48&&s[i][j]<=57)
            {
            count++;
            }
        }
        for(k=0;k<strlen(s[i]);k++)
        {
            if(s[i][k]>=48&&s[i][k]<=57)
            {
                sum[i]=sum[i]+(s[i][k]-'0')*pow(10,count-1-num);
                num++;
            }
        }
    }
    for(i=0;i<pos;i++)
    {
        y[i]=zuidayinzi(sum[i]);
        printf("%d\n",y[i]);
    }
    return 0;
}