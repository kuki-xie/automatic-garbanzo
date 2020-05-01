#include<stdio.h>
#include<math.h>
typedef struct{
	float x;
	float y;
}coordinate;
int main()
{
	int n,i=0;
	scanf("%d",&n);
	coordinate coor[100],*pt1;
	for(;i<n;i++)
	{
		scanf("%f %f",&coor[i].x,&coor[i].y);
	}
	float z=0;
	int j;
	for(j=0;j<n-1;j++)
	{
		z+=sqrt((coor[j+1].x-coor[j].x)*(coor[j+1].x-coor[j].x)+(coor[j+1].y-coor[j].y)*(coor[j+1].y-coor[j].y));
	
	}
	printf("%0.2f",z);
	return 0;
}


