#include<stdio.h>
#include<string.h>
int huiwen(char s[])
{
    int i,j,flag=1;
    for(i=0,j=strlen(s)-1;i < j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=0;
            break;
        }
    }
    if(flag==0) return 0;
    else        return 1;
}
int main(void)
{
    char s[20]={0};
    int i;
    for(i=0;;i++)
    {
        scanf("%c",&s[i]);
        if(s[i]=='\n'||s[i]=='\r') break;
    }
    s[i]='\0';
    if(huiwen(s)==1) printf("right");
    else             printf("wrong");
    return 0;
}