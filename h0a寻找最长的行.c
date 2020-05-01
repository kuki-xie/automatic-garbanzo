#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[102], maxstr[102];
    int max = 0, maxlen, i;
    while (1)
    {
        gets(str);
        if (strcmp(str, "***end***") == 0)
            break;
        for (i = 0; str[i] != '\0'; i++)
            ; //记录列数
        if (i > max)
        {
            strcpy(maxstr, str);
            max = i;
            maxlen = strlen(str);
        }
        else if (i == max)
        {
            continue;
        }
    }
    printf("%d\n", maxlen);
    printf("%s\n", maxstr);
}