#include<stdio.h>
float aver(int (*p)[4])
{
    float average;
    float sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=*(*(p+i)+0);
    }
    average=1.0*sum/5;
    return average;
}
int fals(int (*p)[4])
{
    int i,j,persont,peoplet=0;
    for(i=0;i<5;i++)
    {
        persont=0;
        for(j=0;j<4;j++)
        {
            if(*(*(p+i)+j) < 60) persont++;
        }
        if(persont>=2) peoplet++; 
    }
    return peoplet;
}
int well(int (*p)[4]) //用数组传递实参
{
    int i,j,sum=0,singlet,allt=0;
    int a[5];
    for(i=0;i<5;i++)
    {
        singlet=0,sum=0;
        for(j=0;j<4;j++)
        {
            sum+=*(*(p+i)+j);
        }
        a[i]=sum/4;
        for(j=0;j<4;j++)
        {
            if ( *(*(p+i)+j) > 85) singlet++;
        }
        if(a[i] > 90 || singlet == 4) allt++;
    }
    return allt;
}
int main(void)
{
    int stu[5][4],i,j;
    int (*p)[4];
    p=stu;
    for(i=0;i<5;i++)
        for(j=0;j<4;j++)
            scanf("%d",&stu[i][j]);
    printf("%.1f %d %d",aver(p),fals(p),well(p));
    return 0;
}