//*book.c -- 一本书的图书目录 */
#include<stdio.h>
#include<string.h>
char * s_gets(char * st,int n);
#define MAXTITL 40 /*书名的最大长度 +1 */
#define MAXAUTL 40 /*作者姓名的最大长度  +1 */
#define MAXBOOKS 100    /*书籍的最大数量 */

struct book {               /* 结构模版：标记是book */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};  /* 结构模版结束 */

int main(void)
{
    struct book library[MAXBOOKS];
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while(count < MAXBKS && s_gets(library[count].title,MAXTITL) !=NULL
        && library[count].title[])
    s_gets(library.title,MAXTITL);  /*访问title部分*/
    printf("Now enter the author.\n");
    s_gets(library.author,MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f",&library.value);
    printf("%s by %s: $%.2f\n",library.title,
        library.author,library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author,
        library.title,library.value);
    printf("Done.\n");

    return 0;
}

char * s_gets(char * st,int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');  //查找换行符
        if (find)                 //如果地址不是NULL，
            *find = '\0';           //在此处放置一个空字符
        else
            while(getchar()!='\n')
                continue;   //处理输入行中剩余的字符
    }
    return ret_val;
}