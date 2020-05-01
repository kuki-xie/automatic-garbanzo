#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,sum=0,flag=1;
    char str[13];
    for(i=0;i<13;i++)
        scanf("%c",&str[i]);
    for(i=0;i<13;i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            sum=sum+(str[i]-'0')*flag;
            flag++;
        }
        if(flag==10) break;
    }
    int con=sum%11;
    if(con!=10)
    {
        if(con==str[12]-'0') printf("Right");
        else
        {
            str[12]=con+'0';
            for(i=0;i<13;i++)
                printf("%c",str[i]);
        }
    }
    else
    {
        if(str[12]=='X') printf("Right");
        else
        {
            str[12]='X';
            for(i=0;i<13;i++)
                printf("%c",str[i]);
        }
    }
    return 0;
}