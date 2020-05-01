#include <stdio.h>
typedef struct Number
{
    int sin;
    int add;
} number;

void sort(number num[], int n)
{
    int i, j;
    number temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (num[j].add < num[j + 1].add)
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = num[j];
            }
            else if (num[j].add == num[j + 1].add)
            {
                if (num[j].sin > num[j + 1].sin)
                {
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = num[j];
                }
            }
        }
    }
}
int main(void)
{
    int i, n;
    number num[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i].sin);
    int sum;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        while (num[i].sin)
        {
            sum += num[i].sin % 10;
            num[i].sin = num[i].sin / 10;
        }
        num[i].add = sum;
    }
    sort(num,n);
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",num[i].sin,num[i].add);
    }
    return 0;
}