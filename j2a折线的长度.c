#include<stdio.h>
#include<math.h>
typedef struct Line
{
    float x;
    float y;
} line;
int main(void)
{
    int n,i;
    scanf("%d",&n);
    line coor[101];
    for(i=0;i<n;i++)
        scanf("%f %f",&coor[i].x,&coor[i].y);
    float l=0;
    for(i=0;i<n-1;i++)
        l+=sqrt(pow((coor[i+1].x-coor[i].x),2)+pow((coor[i+1].y-coor[i].y),2));
    printf("%.2f",l);
    return 0;
}
/* 问题描述
坐标面上有N个坐标点（2<=N<=100）依次顺序相连，构成折线，计算折线的总长度并保留小数点后二位输出。坐标点以结构体方式存储。
输入说明
每一行输入一个整数N，表示有多少个坐标点。
第二行开始为N个坐标点的x、y坐标值，x、y坐标值之间用空格分隔。
输出说明
输出折线的总长度，保留小数点后2位。
输入样例
3
2.6 5.5
12 -45.8
-5 15
输出样例
115.29  */