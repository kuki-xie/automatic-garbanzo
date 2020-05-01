#include<stdio.h>
#include<stdlib.h>
int main()
{
 char str[10000];
 scanf("%s",str);
 int a=atoi(str);
 printf("%d %o %x",a,a,a);
 return 0;
}