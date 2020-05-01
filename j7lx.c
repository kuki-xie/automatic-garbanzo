#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Student
{
    char id[15];
    int score;
    int english;
} student;
student sts[200];   //总人数为200
int compare(student st1,student st2)    //筛选满足条件的学生
{
    if(st1.score==st2.score)    //如果总分相同
    {
        if(st1.english==st2.english)    //按英语
            return -strcmp(st1.id,st2.id);  //否则按学号，小的在前面
        else
            return st1.score-st2.score;
    }
    else return st1.score-st2.score;
}
void sort(student sts[],int n)  //排序
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=i,k=i+1;k<n;k++)
        if(compare(sts[k],sts[j])>0)
            j=k;
        if(j!=i)
        {
            student temp=sts[i];
            sts[i]=sts[j];
            sts[j]=temp;
        }
    }
}
int main(void)
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        scanf("%s%d%d",sts[i].id,&sts[i].score,&sts[i].english);
    sort(sts,m);
    for(i=0;i<n;i++)
        printf("%s %d %d\n",sts[i].id,sts[i].score,sts[i].english);
    return 0;
}