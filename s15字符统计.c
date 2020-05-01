#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[100],c;
    int n,i,t=0;
    scanf("%c %d\n",&c,&n);
    scanf("%s",s);
    int l=strlen(s);
    if(n==1)
    {
        for(i=0;i<l;i++)
        {
            if(s[i]==c) t++;
        }
    }
    else
    {
        if(c >='A' && c <= 'Z') c=c+32;
        else c=c;
        for(i=0;i<l;i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')  s[i]=s[i]+32;
            else s[i]=s[i];
            if(c==s[i]) t++;
        }
    }
    printf("%d\n",t);
    return 0;
}