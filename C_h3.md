```c
#include<stdio.h>
#include<string.h>
int count(char word[],char str[][10],int i);
int main()
{
    char str[101][10],word[9];
    int i=0;
    while(1)
    {
        scanf("%s",str[i]);
        i++;
        if(getchar()=='\n') break;
    }
    scanf("%s",word);
    printf("%s %d",word,count(word,str,i));
    return 0;
}
int count(char word[],char str[][10],int i)
{
    int k=0;
    for(int j=0;j<i;j++)    //因为是break出来的，但i++放在break前面 所以用<
    if(strcmp(str[j],word)==0)
    {
        k++;
    }
    return k;
}


#include<stdio.h>
#include<string.h>
int count(char str[],char word[]);
int main()
{
    char str[101],word[9];
    int i=0;
    for(i=0;;i++)
    {
        scanf("%c",&str[i]);
        if(str[i]=='\n') break;                         //输入字符串
    }
    str[i]='\0';   
    scanf("%s",word);                                   //输入要比对的单词
    printf("%s %d",word,count(str,word));
    return 0;
}
int count(char str[],char word[])
{
    int i=0,j=0,k=0,n1=strlen(str),n2=strlen(word);
    int sum=0; 
    while(str[i]!='\0')
    {
        if(str[i]==word[j] && j < n2-1)                 //最后一个word不能加在加就越界
        {
            i++;j++;
            sum++;
        }
        else if (str[i]==word[j] && j == n2-1 )          //读到word最后一个字母
        {
           
			sum++;
			if((str[i+1]==' ' || str[i+1]=='\0')&& sum==n2)  k++;
			i++;j=0;
        }
        else
        {
            j=0;
            while(str[i]!=' ' && str[i]!='\0')
            {
                i++;
            }
            if(str[i] == ' '){
            	i++;
            	sum=0;
			} 
        }
    }
    return k;
}

```
