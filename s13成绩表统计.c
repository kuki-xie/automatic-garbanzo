#include<stdio.h>
int main(void)
{
	int n,i,j,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)    //??????
			scanf("%d",&a[i]);
	int temp;
	for(i=0;i<n-1;i++)	//??ð?????? 
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	int a91[100],a89[100],a78[100],a67[100],a6[100];
	int t91=0,t89=0,t78=0,t67=0,t6=0;
	for(i=0;i<n;i++)	//???????
	{
		if(a[i] >= 90 && a[i] <= 100) t91++;
		else if(a[i] >= 80 && a[i] < 90) t89++;
		else if(a[i] >= 70 && a[i] < 80) t78++;
		else if(a[i] >= 60 && a[i] < 70) t67++;
		else t6++;
	}
	float sum=0;	//????????? 
	for(i=0;i<n;i++) sum+=a[i];
	sum=sum/n;
	printf("%d\n%d\n%d\n%d\n%d\n",t91,t89,t78,t67,t6);
	printf("%.1f\n%d-%d\n",sum,a[0],a[n-1]);
	return 0;
}

