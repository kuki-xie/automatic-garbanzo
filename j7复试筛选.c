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
    for (i = 0; i < m - 1; i++) //冒泡排序
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
/* 问题描述
考研初试成绩公布后需要对m个学生的成绩进行排序，筛选出可以进入复试的前n名学生。排序规则为首先按照总分排序，总分相同则按英语单科成绩排序，总分和英语成绩也相同时考号小者排在前面。现给出这m个学生的考研初试成绩，请筛选出可以进入复试的n名学生并按照排名从高到低的顺序依次输出。
输入说明
输入为m+1行，第一行为两个整数m和n，分别表示总人数和可以进入复试人数，m和n之间用空格分隔，0<n<m<200。接下来为m行数据，每行包括三项信息，分别表示一个学生的考号（字符串）、总成绩（整数）和英语单科成绩（整数），这三项之间用空格分隔。
输出说明tsts
按排名从高到低的顺序输出进入复试的这n名学生的信息。
输入样例
5 3
XD20160001 330 65
XD20160002 330 70
XD20160003 340 60
XD20160004 310 80
XD20160005 360 75
输出样例
XD20160005 360 75
XD20160003 340 60
XD20160002 330 70  */