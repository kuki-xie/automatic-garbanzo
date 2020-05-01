#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int i;
    char a[9],b[9],c[9],op;
    int sa,sb,sc;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    int la=strlen(a);
    int lb=strlen(b);
    int lc=strlen(c);
    if(la==1 && (a[0] <'0' || a[0] >'9'))
    {
        op=a[0];
        sb=atoi(b);
        sc=atoi(c);
        switch (op)
        {
            case '+':printf("%d",sb+sc);break;
            case '-':printf("%d",sb-sc);break;
            case '*':printf("%d",sb*sc);break;
            case '/':printf("%d",sb/sc);break;
            case '%':printf("%d",sb%sc);break;
            default:break;
        }
    }
    if(lb==1 && (b[0] <'0' || b[0] >'9'))
    {
        op=b[0];
        sa=atoi(a);
        sc=atoi(c);
        switch (op)
        {
            case '+':printf("%d",sa+sc);break;
            case '-':printf("%d",sa-sc);break;
            case '*':printf("%d",sa*sc);break;
            case '/':printf("%d",sa/sc);break;
            case '%':printf("%d",sa%sc);break;
            default:break;
        }
    }
    if(lc==1 && (c[0] <'0' || c[0] >'9'))
    {
        op=c[0];
        sa=atoi(a);
        sb=atoi(b);
        switch (op)
        {
            case '+':printf("%d",sa+sb);break;
            case '-':printf("%d",sa-sb);break;
            case '*':printf("%d",sa*sb);break;
            case '/':printf("%d",sa/sb);break;
            case '%':printf("%d",sa%sb);break;
            default:break;
        }
    }
    return 0;
}