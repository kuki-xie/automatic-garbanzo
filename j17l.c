#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[103];
    int i,j,t1=0,t2=0,
        a[103],b[103]={0},c[103]={0};
    scanf("%s",str);
    int n=strlen(str);
    for(i=0;i<n;i++)
        a[i]=str[i]-'0';
    for(i=1;i<n;i++)
    {
        if(a[i]>a[0]) b[t1++]=a[i];
        else if(a[i]<=a[0]) c[t2++]=a[i];
    }
    for(i=0;i<t2-1;i++)
        for(j=0;j<t2-1-i;j++)
        {
            if(c[j]>c[j+1])
            {
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    for(i=0;i<t1;i++)
        str[i]=b[i]+'0';
    str[t1]=a[0]+'0';
    for(i=0;i<t2;i++)
        str[t1+1+i]=c[i]+'0';
    printf("%s",str);
    return 0;
}