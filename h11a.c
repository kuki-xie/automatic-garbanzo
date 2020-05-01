#include<stdio.h>
int main(void)
{
    int i,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int p[c+2];
    p[0]=a/b;
    a=a%b*10;
    for(i=1;i<c+2;i++)
    {
        p[i]=a/b;
        a=a%b*10;
    }
    p[c]+=p[c+1]>4;
    for(i=c;i>0&&p[i]>9;i--)
    {
        p[i-1]++;
        p[i]-=10;
    }
    printf("%d.",p[0]);
    for(i=1;i<=c;i++)
        printf("%d",p[i]);
    return 0;
}