#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

char lines[100]; //初始化lines
bool detect(char *p) //定义布尔类型
{
    int len,j=0,ch; 
    len=strlen(p);
    char stack[100];
    for(int i=0;i<len;i++)
    {
        ch=*(p+i); 
        if(ch=='(' || ch=='[' || ch=='{')
            stack[++j]=*(p+i); 
        if(ch==')' || ch==']' || ch=='}')
        {
            if(j==0)
                return false;
            else
                if((ch==')' && stack[j]=='(') || (ch==']' && stack[j]=='[') || (ch=='}' && stack[j]=='{'))
                    stack[j--]='\0';
        }
    }
    return (j)?false:true;
}

int main(){
    memset(lines,0,sizeof(lines));
    while(scanf("%s",lines)!=EOF){
        if(detect(lines))
            printf("Yes\n");
        else
            printf("no\n");
    }
    return 0;
}