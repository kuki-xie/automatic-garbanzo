#include<stdio.h>
int main()
{
    char s[14]={0};
    int i,j,t,ch,sum=0,pos=1;
    for(i=0;i<13;i++)
    {
        scanf("%c",&s[i]); //输入字符串
    }
    for(i=0;i<13;i++)
    {
        if(s[i]>=48&&s[i]<=57&&i<13) //如果是数字
        {
            sum=sum+(s[i]-'0')*pos;
            pos++;
        }
        //printf("%d %d %d\n",s[i]-'0',sum,pos);
        if(pos==10) break; //一直打到末尾
    }
    j=s[12]-'0';
    t=sum%11;
    //printf("%d %d\n",sum,t);
    if(t!=10)
    {
        if(t==j) printf("Right");
        else
        {
            s[12]=t+'0';
            for(i=0;i<13;i++)
            {
                printf("%c",s[i]);
            }
            //printf("%d",t);
        }
    }
    else
    {
        if(s[12]==88) printf("Right");
        else
        {
            s[12]=88;
            for(i=0;i<13;i++)
            {
                printf("%c",s[i]);
            }
        }
    }
    return 0;
}