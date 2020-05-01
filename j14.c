#include<stdio.h>
#include<string.h>
#include<stdio.h>
#define N 150 //定义数组行数
#define MAX 25 //定义列数
void Sortstring(char str[][MAX],int n)
{
    int i,j;
    char temp[MAX];
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(str[j],str[j+1]) > 0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
}
int main(void)
{
    char str[N][MAX],ch;
    int i,j,n,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        l=0;
        scanf("%s",str[i]);
        l=strlen(str[i]);
        for(j=0;;j++)
        {
            scanf("%c",&ch);
            if(ch!='\n'&&ch!='\r')
            {
                str[i][l+j]=ch;
                
            }
        }
    }
}