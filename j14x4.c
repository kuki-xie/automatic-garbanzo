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
        for(j=0;j<n-i-1;j++)
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
    int i,j,n=0;
    char str[N][MAX]={'\0'};
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        gets(str[i]);
    Sortstring(str,n);
    for(i=0;i<n;i++)
        puts(str[i]);
    return 0;
}
