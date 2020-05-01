#include<stdio.h>
int huiwen(int n)
{
	int a[20]={0},i=0,sum=0,flag=1;
	if(n<10) return 1;
	else
	{
		while(n)
		{
			sum+=n%10;
			a[i++]=n%10;
			n/=10;
		}
		int t=i;
		int j;
		for(i=0,j=t-1;i<j;i++,j--)
		{
			if(a[i]!=a[j])
			{
				flag=0;
				break;
		}
	}
	if(flag==1) return sum;
	else 		return 1; 
}
int main(void)
{
	{
	int n;
	scanf("%d",&n);
	if(huiwen(n)==1) printf("no");
	else 			 printf("%d",huiwen(n));
	return 0;
}
