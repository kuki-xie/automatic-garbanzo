```c
#include<stdio.h>
int main()
	{
		int n;
		int score=0;
		int a[1000];
		int i;
		for(i=0;i<=1000;i++)
			{
				scanf("%d",&a[i]);
				if(a[i]==0)
					{
						break;
					}
			}
		score=a[0];
		for(int k=2,i=1;a[i]!=0;i++)
			{
				if(a[i]==1)
					{
						score+=1;
						k=2;
					}
				else if(a[i]==2&&a[i-1]==1)
					{
						score+=2;
						k=2;
					}
				else if(a[i]==2&&a[i-1]==2)
					{
						score=score+2*k;
						k++;
					}
			}
		printf("%d",score);
		return 0;
	}
  ```
