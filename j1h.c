#include<stdio.h>
typedef struct Complex	//定义结构体
{
	float real;   //实部
	float image;  //虚部
}complex;
int main()
{
	int n,i; 	//n表示复数的个数
	float sum1=0,sum2=0;  //分别表示实部虚部累加和
	scanf("%d",&n);  //输入复数个数
	for(i=0;i<n;i++) 
	{
		complex c[i]; //定义数组
		scanf("%f %f",&c[i].real,&c[i].image);
		sum1+=c[i].real;
		sum2+=c[i].image;
	}
	if(sum2>0)
	printf("%0.2f+%0.2fi",sum1,sum2);
	else
	printf("%0.2f%0.2fi",sum1,sum2);
}

