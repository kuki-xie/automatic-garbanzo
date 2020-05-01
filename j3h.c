#include<stdio.h>
typedef struct{
	int year;
	int month;
	int day;
	int c;
}time;
int main()
{
	time time1;
	int love;
	scanf("%d/%d/%d",&time1.year,&time1.month,&time1.day);
	if(time1.year%400==0||time1.year%4==00&&time1.year%100!=0)
	{
		switch(time1.month)
		{
			case 1 : love=time1.day;break;
			case 2 : love=time1.day+31;break;
			case 3 : love=time1.day+60;break;
			case 4 : love=time1.day+91;break;
			case 5 : love=time1.day+121;break;
			case 6 : love=time1.day+152;break;
			case 7 : love=time1.day+182;break;
			case 8 : love=time1.day+213;break;
			case 9 : love=time1.day+244;break;
			case 10 : love=time1.day+274;break;
			case 11 : love=time1.day+305;break;
			case 12 : love=time1.day+335;break;
		}
	}
	else
	{
		switch(time1.month)
		{
			case 1 : love=time1.day;break;
			case 2 : love=time1.day+31;break;
			case 3 : love=time1.day+59;break;
			case 4 : love=time1.day+90;break;
			case 5 : love=time1.day+120;break;
			case 6 : love=time1.day+151;break;
			case 7 : love=time1.day+181;break;
			case 8 : love=time1.day+212;break;
			case 9 : love=time1.day+243;break;
			case 10 : love=time1.day+273;break;
			case 11 : love=time1.day+304;break;
			case 12 : love=time1.day+334;break;
		}
	}
	printf("%d\n%d\n%d\n%d\n",time1.year,time1.month,time1.day,love);
	return 0;
 } 

