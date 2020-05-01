#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int e,i,j,k,n;
    char s[150][25],ch,b[25];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        e=0;
        scanf("%s",s[i]);
        e=strlen(s[i]);
        for(j=0;;j++)
        {
            scanf("%c",&ch);
            if(ch=='\n'||ch=='\r')
            {
                s[i][e+j]='\0';
                e=e+j;
                break;
            }
            else
                s[i][e+j]=ch;
        } 
    }
    for(i=0;i<n;i++)
    {
        for(j=i,k=i+1;k<n;k++)
        if(strcmp(s[j],s[k])>0) j=k;
        if(strcmp(s[j],s[i])!=0)
        {
            strcpy(b,s[j]);
            strcpy(s[j],s[i]);
            strcpy(s[i],b);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<strlen(s[i]);j++)
        {
            printf("%c",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}