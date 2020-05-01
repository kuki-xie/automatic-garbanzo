#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student
{
    char id[15];
    int score;
    int english;
} student;
student sts[200]; //定义学生个数
int compare(student st1, student st2)
{
    if (st1.score == st2.score) //如果总分相同
    {
        if (st1.english == st2.english)     //看英语
            return -strcmp(st1.id, st2.id); //如果英语相同，看学号
        else
            return st1.english - st2.english;
    }
    else
        return st1.score - st2.score;
}
void sort(student sts[], int m) //按照要求从高往低排
{
    int i, j;
    for (i = 0; i < m - 1; i++)
        for (j = 0; j < m - 1 - i; j++)
        {
            if (compare(sts[j], sts[j + 1]) < 0)
            {
                student temp = sts[j];
                sts[j] = sts[j + 1];
                sts[j + 1] = temp;
            }
        }
}
int main(void)
{
    int i, m, n;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
        scanf("%s%d%d", sts[i].id, &sts[i].score, &sts[i].english);
    sort(sts, m);
    for (i = 0; i < n; i++)
        printf("%s %d %d\n", sts[i].id, sts[i].score, sts[i].english);
    return 0;
}