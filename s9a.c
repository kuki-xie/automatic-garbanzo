#include<stdio.h>
#define m 100
int row,col,inx,iny;
void minmax(int a[m][m])
{
    int flag=0;
    int i,j,min[m],max[m];
    for(i=0;i<row;i++)  //找出每一行的最小值
    {
        min[i]=a[i][0];
        for(j=1;j<col;j++)
            if(min[i]>a[i][j])
                min[i]=a[i][j];
    }
    for(i=0;i<row;i++)  //找出每一列中的最大值
    {
        max[i]=a[0][i];
        for(j=1;j<col;j++)
            if(max[i]<a[j][i])
                max[i]=a[j][i];
    }
    for(i=0;i<row;i++)   //找出马鞍点
        for(j=0;j<col;j++)
            if(min[i]==max[j])
            {
                printf("%d %d %d",i,j,a[i][j]);
                flag=1;
            }
    if(flag==0) printf("no\n");  
}
int main(void)
{
    int num[m][m];
    scanf("%d %d",&row,&col);
    for(inx=0;inx<row;inx++)
        for(iny=0;iny<col;iny++)
            scanf("%d",&num[inx][iny]);
    minmax(num);
    return 0;
}
