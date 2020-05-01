#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[103],a[103]={0},b[103]={0},c[103]={0};
    int i,j,t1=0,t2=0;
    scanf("%s",str);
    int n=strlen(str);
    for(i=1;i<n;i++) //分类
    {
        if(str[i] > str[0])
            b[t1++]=str[i];
        else if(str[i] <= str[0])
            c[t2++]=str[i];
    }
    for(i=0;i<t2-1;i++) //对C数组升序
        for(j=0;j<t2-1-i;j++)
        {
            if(c[j]>c[j+1])
            {
                char temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    for(i=0;i<t1;i++)
        a[i]=b[i];
    a[t1]=str[0];
    for(i=0;i<t2;i++)
        a[i+t1+1]=c[i];
    printf("%s",a);
    return 0;
}