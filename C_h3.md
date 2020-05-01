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
```
