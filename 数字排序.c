#include <stdio.h>
typedef struct Shu
{
    int n;
    int sum;
} shu;
shu st[1000];
int num(int a)
{
    int i, num = 0;
    if (a == 0)
        return 0;
    else
    {
        for (i = 0; i < 10; i++)
        {
            num = num + a % 10;
            a = a / 10;
            if (a == 0)
                break;
        }
        return num;
    }
}
int compare(shu st1, shu st2)
{
    if (st1.sum == st2.sum)
        return st1.n - st2.n;
    return st2.sum - st1.sum;
}
void sort(shu st[], int m)
{
    int i, j, k;
    for (i = 0; i < m - 1; i++)
    {
        for (j = i, k = i + 1; k < m; k++)
            if (compare(st[j], st[k]) > 0)
                j = k;
        if (i != j)
        {
            shu sts = st[i];
            st[i] = st[j];
            st[j] = sts;
        }
    }
}
int main()
{
    int m, i;
    scanf("%d", &m);
    int a[100];
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m; i++)
    {
        st[i].n = a[i];
        st[i].sum = num(a[i]);
    }
    sort(st, m);
    for (i = 0; i < m; i++)
    {
        printf("%d %d\n", st[i].n, st[i].sum);
    }
    return 0;
}