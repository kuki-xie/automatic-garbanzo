#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int gcd(int A,int B)
{
    int i;
    int a=abs(A),b=abs(B);
    int min=a<b?a:b;
    if(a==0) return b;
    else if(b==0) return a;
    else
    {
        for(i=min;i>1;i--)
        {
            if(a%i == 0 && b%i == 0)
            break;
        }
        return i;
    }
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",gcd(a,b));
    return 0;
}