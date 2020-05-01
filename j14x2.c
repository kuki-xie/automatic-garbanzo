#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 25 /*字符串最大长度*/ 
#define N 150 /*字符串个数*/ 
void SortString(char str[][MAX],int n) /*函数功能：交换法实现字符串按字典顺序排序*/ 
{
    int i,j;
    char temp[MAX]; 
    for (i=0;i<n-1;i++) //读行
    { 
        for (j=i+1;j<n;j++) //每一行进行比较
        {
            if (strcmp(str[j],str[i])<0) 
            {
                strcpy (temp,str[i]); 
                strcpy (str[i],str[j]);
                strcpy (str[j],temp);
            } 
        } 
    } 
}
int main(void)
{
    int l,i,j,k,n;
    char str[N][MAX]={'\0'},ch,a[25]={'\0'};
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        while(getchar()!='\n')
        {
            
        }
    }
    SortString(str,n);
    for(i=0;i<n;i++)
        printf("%s",str[i]);
    return 0;
}
//错误